/* So yeah, this code is pretty messy! */
#include <iostream>
#include <stdint.h>
#include <stdexcept>
#include "xparameters.h"
#include "xfilt.h"
#include "xgpio.h"
#include "display_ctrl.h"
#include "linuxmmap.h"
#include "filt_vdma.h"
#include "xil_printf.h"
#include <semaphore.h>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

/*--------------------------*/
/*        Constants         */
/*--------------------------*/

#define DISPLAY_UIO_ID			( 0 )
#define DISPLAY_DEF_VMODE		( VMODE_640x480 )
#define DISPLAY_MAX_WIDTH		( 640 )
#define DISPLAY_MAX_HEIGHT		( 480 )
#define DISPLAY_MAX_FRAME		( DISPLAY_MAX_WIDTH*DISPLAY_MAX_HEIGHT )
#define DISPLAY_STRIDE 			( DISPLAY_MAX_WIDTH*sizeof( uint32_t ) )
#define DISPLAY_IS_HDMI			( false )
#define DISPLAY_ROI_WIDTH		( 320 )
#define DISPLAY_ROI_HEIGHT		( 240 )
#define VDMA_UIO_ID				( 2 )
#define VDMA_DEVICE_ID 			( XPAR_AXI_VDMA_0_DEVICE_ID )
#define VDMA_FRAME_BUFF_ADDR	( 0x30000000 ) /* Physical Address */
#define FILT_UIO_ID				( 5 )
#define FILT_DEVICE_ID			( XPAR_FILT_0_DEVICE_ID )
#define FILT_VDMA_UIO_ID_0		( 3 )
#define FILT_VDMA_UIO_ID_1		( 4 )
#define FILT_VDMA_DEVICE_ID		( XPAR_AXI_VDMA_1_DEVICE_ID )
#define FILT_GPIO_DEVICE_ID		( XPAR_AXI_GPIO_1_DEVICE_ID )
#define FILT_GPIO_UIO_ID		( 6 )

/*--------------------------*/
/*        Type Defs         */
/*--------------------------*/

typedef uint32_t ( vdma_framebuff )[ DISPLAY_NUM_FRAMES ][ DISPLAY_MAX_FRAME ];

/*--------------------------*/
/*       Declarations       */
/*--------------------------*/

/* Object that represents the Digilent AXI Display Controller. */
DisplayCtrl display_obj;

/* The following virtual addresses need to be defined such that
They are mapped to the appropriate physical addresses! In the future, the
generic uio driver should be used to perform these memory maps! */
linuxmmap dispctrl_mmap_obj( DISPLAY_UIO_ID );
linuxmmap vdma_mmap_obj( VDMA_UIO_ID );
linuxmmap framebuff_mmap_obj( VDMA_FRAME_BUFF_ADDR, sizeof( vdma_framebuff ) );

/* Reference the memory dedicated to the frame buffers. */
vdma_framebuff& framebuff_arr = *( reinterpret_cast<vdma_framebuff*>( framebuff_mmap_obj.getvaddr() ) );
uint32_t* vir_framebuff_ptr[ DISPLAY_NUM_FRAMES ];
uint32_t* phy_framebuff_ptr[ DISPLAY_NUM_FRAMES ];

/* Represents the HLS filt. */
filtvdma filtvdma_obj;
XGpio xgpio_obj;
linuxmmap filt_mmap_obj( FILT_UIO_ID );
linuxmmap filt_vdma_mmap_0_obj( FILT_VDMA_UIO_ID_0 );
linuxmmap filt_vdma_mmap_1_obj( FILT_VDMA_UIO_ID_1 );
linuxmmap filt_gpio_mmap_obj( FILT_GPIO_UIO_ID );
pthread_t filt_int_pthread;
pthread_t vdma_write_int_pthread;
pthread_t vdma_read_int_pthread;
sem_t vdma_read_sem;

/* OpenCV objects. */
Mat framebuff_mat[ DISPLAY_NUM_FRAMES ];
VideoCapture vstream_obj( -1 );
Mat roi_mat;

void* filt_int_handler( void* );
void* vdma_write_int_handler( void* );
void* vdma_read_int_handler( void* );

/*--------------------------*/
/*           Main           */
/*--------------------------*/

int main()
{
	/* check and see if the camera actually works. */
	cout << "Checking to see if the video stream opened and setting resolution..." << endl;
	{
		if ( !vstream_obj.isOpened() )
			throw runtime_error( "Web camera could not be opened!" );
		vstream_obj.set( CV_CAP_PROP_FRAME_WIDTH,DISPLAY_ROI_WIDTH );
		vstream_obj.set( CV_CAP_PROP_FRAME_HEIGHT,DISPLAY_ROI_HEIGHT );
	}

	/* Configure display. */
	cout << "Configuring display..." << endl;
	{
		/* Modifications need to be done to the AXI VDMA's configuration table. */
		extern XAxiVdma_Config XAxiVdma_ConfigTable[];
		XAxiVdma_ConfigTable[ VDMA_DEVICE_ID ].BaseAddress = vdma_mmap_obj.getvaddr();

		/* There needs to be pointers that point to each of the frames. Since the display
		driver needs to configure the VDMA with physical pointers, both the virtual and
		physical addresses are needed. */
		for ( int each_frame = 0; each_frame < DISPLAY_NUM_FRAMES; each_frame++ )
		{
			vir_framebuff_ptr[ each_frame ] = framebuff_arr[ each_frame ];
			phy_framebuff_ptr[ each_frame ] = reinterpret_cast<uint32_t*>( VDMA_FRAME_BUFF_ADDR +
					( each_frame * DISPLAY_MAX_FRAME * sizeof( uint32_t ) ) );
		}

		/* Configure the display driver. */
		int Status;
		Status = DisplayInitialize( &display_obj,
				VDMA_DEVICE_ID,
				dispctrl_mmap_obj.getvaddr(),
				DISPLAY_IS_HDMI,
				vir_framebuff_ptr, phy_framebuff_ptr,
				DISPLAY_STRIDE );
		if ( Status!= XST_SUCCESS )
			throw runtime_error( "The display driver wasn't properly configured." );

		/* Set the resolution. */
		DisplaySetMode( &display_obj, &DISPLAY_DEF_VMODE );

		/* Start display. */
		Status = DisplayStart( &display_obj );
		if ( Status!= XST_SUCCESS )
			throw runtime_error( "The display could not be started." );
	}

	/* Configuring image processing filt IP core. */
	cout << "Configuring filt core..." << endl;
	{
		/* Configure base addresses to virtual addresses. */
		{
			extern XFilt_Config XFilt_ConfigTable[];
			extern XAxiVdma_Config XAxiVdma_ConfigTable[];
			extern XGpio_Config XGpio_ConfigTable[];

			XFilt_ConfigTable[ FILT_DEVICE_ID ].Control_bus_BaseAddress = filt_mmap_obj.getvaddr();
			XAxiVdma_ConfigTable[ FILT_VDMA_DEVICE_ID ].BaseAddress = filt_vdma_mmap_0_obj.getvaddr();
			XGpio_ConfigTable[ FILT_GPIO_DEVICE_ID ].BaseAddress = filt_gpio_mmap_obj.getvaddr();
		}

		/* Configure the standalone driver itself. Configure channel 1 of
		the GPIO as an output. This GPIO is used to drive the vdma's fsync. */
		if ( XGpio_Initialize( &xgpio_obj, FILT_GPIO_DEVICE_ID ) != XST_SUCCESS )
			throw runtime_error( "xgpio could not be configured!" );
		if ( XGpio_SelfTest( &xgpio_obj ) != XST_SUCCESS )
			throw runtime_error( "xgpio failed the self test!" );
		XGpio_SetDataDirection( &xgpio_obj, 1, 0 );

		/* Initialize the filt and vdma cores. */
		{
			filtvdma_frameConfig frameConfig =
			{
					static_cast<int>( DISPLAY_DEF_VMODE.height ),
					static_cast<int>( DISPLAY_DEF_VMODE.width * sizeof( uint32_t ) ),
					DISPLAY_STRIDE,
					reinterpret_cast<UINTPTR*>( phy_framebuff_ptr ),
					DISPLAY_NUM_FRAMES
			};
			int Status;
			Status = filtvdma_setup( &filtvdma_obj, FILT_DEVICE_ID, FILT_VDMA_DEVICE_ID, &frameConfig );
			if ( Status != XST_SUCCESS )
			{
				cerr << "Error message: " << Status << endl;
				throw runtime_error( "Filt core could not be initialized." );
			}
		}

		/* Launch the related threads and synchronization tools. */
		if ( sem_init( &vdma_read_sem, 0, 1 ) < 0 )
			throw runtime_error( "vdma_read_sem couldn't be created.");
//		if ( pthread_create( &filt_int_pthread, NULL, filt_int_handler, NULL ) > 0 )
//			throw runtime_error( "The filt thread could not be created. ");
		if ( pthread_create( &vdma_write_int_pthread, NULL, vdma_write_int_handler, NULL ) > 0 )
			throw runtime_error( "The vdma write thread could not be created. ");
//		if ( pthread_create( &vdma_read_int_pthread, NULL, vdma_read_int_handler, NULL ) > 0 )
//			throw runtime_error( "The vdma write thread could not be created. ");
	}

	/* Configure opencv frames with framebuffer. */
	cout << "Configuring framebuffer with opencv Mats..." << endl;
	{
		const int sizes[] =
		{
				static_cast<const int>( display_obj.vMode.height ),
				static_cast<const int>( display_obj.vMode.width )
		};
		const size_t steps[] = { DISPLAY_STRIDE };
		for ( int each_frame = 0; each_frame < DISPLAY_NUM_FRAMES; each_frame++ )
		{
			framebuff_mat[ each_frame ] = Mat(
					2, sizes,
					CV_8UC(4),
					reinterpret_cast<void*>( display_obj.vframePtr[ each_frame ] ),
					steps );
			framebuff_mat[ each_frame ] = Scalar( 0, 0, 0 );
		}
	}

	/* Run the main application. */
	cout << "Running main application..." << endl;
	{
//#define GET_NEXT_FRAME( start ) ( ( ( start )+1 ) % DISPLAY_NUM_FRAMES )
		const int raw_frame = 0;
		int process_frame = 1;
		int video_frame = 2;

		if ( filtvdma_startreadframe( &filtvdma_obj, raw_frame ) != XST_SUCCESS )
			throw runtime_error( "Couldn't set the read frame." );
		if ( filtvdma_startwriteframe( &filtvdma_obj, process_frame ) != XST_SUCCESS )
			throw runtime_error( "Couldn't set the write frame." );

		Rect roi_rect( 0, 0, DISPLAY_ROI_WIDTH, DISPLAY_ROI_HEIGHT );

//		/* Debug block */
//		{
//			cout << "Check for errors on both channels..." << endl;
//			int write_error =  XAxiVdma_GetDmaChannelErrors( &filtvdma_obj.vdma_obj, XAXIVDMA_WRITE );
//			int read_error =  XAxiVdma_GetDmaChannelErrors( &filtvdma_obj.vdma_obj, XAXIVDMA_READ );
//			cout << "Write: " << hex << write_error << "\nRead: " << read_error << dec << endl;
//			cout << "Check for status on both channels..." << endl;
//			u32 write_status = XAxiVdma_GetStatus( &filtvdma_obj.vdma_obj, XAXIVDMA_WRITE );
//			u32 read_status = XAxiVdma_GetStatus( &filtvdma_obj.vdma_obj, XAXIVDMA_READ );
//			cout << "Write: " << hex << write_status << "\nRead: " << read_status << dec << endl;
//			DisplayChangeFrame( &display_obj, data_out_frame );
//		}

//		int Status;
//		filtvdma_obj.vdmaConfig.FixedFrameStoreAddr = data_out_frame;
//		Status = XAxiVdma_StartWriteFrame( &filtvdma_obj.vdma_obj, &filtvdma_obj.vdmaConfig );
//		if ( Status != XST_SUCCESS )
//		{
//			cerr << "error: " << Status << endl;
//			throw runtime_error( "Write failed." );
//		}
//		filtvdma_obj.vdmaConfig.FixedFrameStoreAddr = raw_frame;
//		Status = XAxiVdma_StartReadFrame( &filtvdma_obj.vdma_obj, &filtvdma_obj.vdmaConfig );
//		if ( Status != XST_SUCCESS )
//		{
//			cerr << "error: " << Status << endl;
//			throw runtime_error( "Read failed." );
//		}

		while ( true )
		{
			/* Make sure fsync is set high. */
			XGpio_DiscreteWrite( &xgpio_obj, 1, 1 );

//			/* Wait until user input. */
//			if ( cin.get() == 'q' )
//				break;
//			cin.get();

			/* Set video frame. */
			{
				DisplayChangeFrame( &display_obj, video_frame );
			}
			//cout << "video_frame: " << video_frame << endl;

			/* Acquire process_frame. */
			{
				/* Capture new frame from video stream. */
				Mat frame_0;
				vstream_obj >> frame_0;

				/* Determine region of interest. */
				roi_mat = framebuff_mat[ raw_frame ]( roi_rect );

				/* Mix extra channel into frame to meet the format of the display frame buffers. */
				int from_to[] = { 0,0, 1,1, 2,2, };
				mixChannels( &frame_0, 1, &roi_mat, 1, from_to, 3 );

				/* Set the new process frame. */
				int Status = filtvdma_setwriteframe( &filtvdma_obj, process_frame );
				if ( Status != XST_SUCCESS )
				{
					cerr << "error message: " << Status << endl;
					throw runtime_error( "Coult not set new read frame." );
				}
				//cout << "process frame" << process_frame << endl;

				/* Trigger VDMA with fsync. Wait until interrupt. */
				XGpio_DiscreteWrite( &xgpio_obj, 1, 0 );
				sem_wait( &vdma_read_sem );
			}

			/* Swap frames. */
			{
				int temp = process_frame;
				process_frame = video_frame;
				video_frame = temp;
			}
		}
	}

	/* Let the OS do the cleanup. */
	return 0;
}

void* filt_int_handler( void* )
{
	//cout << "filt_int_handler started" << endl;
	while ( true )
	{
		filt_mmap_obj.wait();
		//cout << "Filt interrupt has been triggered" << endl;
		filtvdma_clear_filt_int( &filtvdma_obj );
		filt_mmap_obj.ready();
	}
	return NULL;
}

void* vdma_write_int_handler( void* )
{
	//cout << "vdma_write_int_handler started" << endl;
	while ( true )
	{
		filt_vdma_mmap_1_obj.wait();
		sem_post( &vdma_read_sem );
		//cout << "Vdma write interrupt has been triggered" << endl;
		filtvdma_clear_vdma_write_int( &filtvdma_obj );
		filt_vdma_mmap_1_obj.ready();
	}
	return NULL;
}

void* vdma_read_int_handler( void* )
{
	//cout << "vdma_read_int_handler started" << endl;
	while ( true )
	{
		filt_vdma_mmap_0_obj.wait();
		//cout << "Vdma read interrupt has been triggered" << endl;
		filtvdma_clear_vdma_read_int( &filtvdma_obj );
		filt_vdma_mmap_0_obj.ready();
	}
	return NULL;
}

void outbyte (char8 c)
{
	cout << c;
}

char8 inbyte(void)
{
	char c;
	cin >> c;
	return c;
}
