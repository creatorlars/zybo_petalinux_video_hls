#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STDOUT_BASEADDRESS /* Andrew Powell - Needed by xil_printf */

/******************************************************************/

/* Definitions for driver AXI_DISPCTRL */
#define XPAR_AXI_DISPCTRL_NUM_INSTANCES 1

/* Definitions for peripheral AXI_DISPCTRL_0 */
#define XPAR_AXI_DISPCTRL_0_DEVICE_ID 0
#define XPAR_AXI_DISPCTRL_0_S_AXI_BASEADDR 0x43C00000	/* Physical Address. */
#define XPAR_AXI_DISPCTRL_0_S_AXI_HIGHADDR 0x43C0FFFF	/* Physical Address. */


/******************************************************************/

/* Definitions for driver AXIVDMA */
#define XPAR_XAXIVDMA_NUM_INSTANCES 2

/* Definitions for peripheral AXI_VDMA_0 */
#define XPAR_AXI_VDMA_0_DEVICE_ID 0
#define XPAR_AXI_VDMA_0_BASEADDR 0x43000000
#define XPAR_AXI_VDMA_0_HIGHADDR 0x4300FFFF
#define XPAR_AXI_VDMA_0_NUM_FSTORES 4
#define XPAR_AXI_VDMA_0_INCLUDE_MM2S 1
#define XPAR_AXI_VDMA_0_INCLUDE_MM2S_DRE 0
#define XPAR_AXI_VDMA_0_M_AXI_MM2S_DATA_WIDTH 64
#define XPAR_AXI_VDMA_0_INCLUDE_S2MM 0
#define XPAR_AXI_VDMA_0_INCLUDE_S2MM_DRE 0
#define XPAR_AXI_VDMA_0_M_AXI_S2MM_DATA_WIDTH 64
#define XPAR_AXI_VDMA_0_AXI_MM2S_ACLK_FREQ_HZ 0
#define XPAR_AXI_VDMA_0_AXI_S2MM_ACLK_FREQ_HZ 0
#define XPAR_AXI_VDMA_0_MM2S_GENLOCK_MODE 1
#define XPAR_AXI_VDMA_0_MM2S_GENLOCK_NUM_MASTERS 1
#define XPAR_AXI_VDMA_0_S2MM_GENLOCK_MODE 0
#define XPAR_AXI_VDMA_0_S2MM_GENLOCK_NUM_MASTERS 1
#define XPAR_AXI_VDMA_0_INCLUDE_SG 0
#define XPAR_AXI_VDMA_0_ENABLE_VIDPRMTR_READS 1
#define XPAR_AXI_VDMA_0_USE_FSYNC 1
#define XPAR_AXI_VDMA_0_FLUSH_ON_FSYNC 1
#define XPAR_AXI_VDMA_0_MM2S_LINEBUFFER_DEPTH 2048
#define XPAR_AXI_VDMA_0_S2MM_LINEBUFFER_DEPTH 512
#define XPAR_AXI_VDMA_0_INCLUDE_INTERNAL_GENLOCK 1
#define XPAR_AXI_VDMA_0_S2MM_SOF_ENABLE 1
#define XPAR_AXI_VDMA_0_M_AXIS_MM2S_TDATA_WIDTH 32
#define XPAR_AXI_VDMA_0_S_AXIS_S2MM_TDATA_WIDTH 32
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_1 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_5 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_6 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_7 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_9 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_13 0
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_14 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_INFO_15 1
#define XPAR_AXI_VDMA_0_ENABLE_DEBUG_ALL 0
#define XPAR_AXI_VDMA_0_ADDR_WIDTH 32

/* Definitions for peripheral AXI_VDMA_1 */
#define XPAR_AXI_VDMA_1_DEVICE_ID 1
#define XPAR_AXI_VDMA_1_BASEADDR 0x43010000
#define XPAR_AXI_VDMA_1_HIGHADDR 0x4301FFFF
#define XPAR_AXI_VDMA_1_NUM_FSTORES 4
#define XPAR_AXI_VDMA_1_INCLUDE_MM2S 1
#define XPAR_AXI_VDMA_1_INCLUDE_MM2S_DRE 0
#define XPAR_AXI_VDMA_1_M_AXI_MM2S_DATA_WIDTH 64
#define XPAR_AXI_VDMA_1_INCLUDE_S2MM 1
#define XPAR_AXI_VDMA_1_INCLUDE_S2MM_DRE 0
#define XPAR_AXI_VDMA_1_M_AXI_S2MM_DATA_WIDTH 32
#define XPAR_AXI_VDMA_1_AXI_MM2S_ACLK_FREQ_HZ 0
#define XPAR_AXI_VDMA_1_AXI_S2MM_ACLK_FREQ_HZ 0
#define XPAR_AXI_VDMA_1_MM2S_GENLOCK_MODE 0
#define XPAR_AXI_VDMA_1_MM2S_GENLOCK_NUM_MASTERS 1
#define XPAR_AXI_VDMA_1_S2MM_GENLOCK_MODE 1
#define XPAR_AXI_VDMA_1_S2MM_GENLOCK_NUM_MASTERS 1
#define XPAR_AXI_VDMA_1_INCLUDE_SG 0
#define XPAR_AXI_VDMA_1_ENABLE_VIDPRMTR_READS 1
#define XPAR_AXI_VDMA_1_USE_FSYNC 1
#define XPAR_AXI_VDMA_1_FLUSH_ON_FSYNC 1
#define XPAR_AXI_VDMA_1_MM2S_LINEBUFFER_DEPTH 2048
#define XPAR_AXI_VDMA_1_S2MM_LINEBUFFER_DEPTH 2048
#define XPAR_AXI_VDMA_1_INCLUDE_INTERNAL_GENLOCK 1
#define XPAR_AXI_VDMA_1_S2MM_SOF_ENABLE 1
#define XPAR_AXI_VDMA_1_M_AXIS_MM2S_TDATA_WIDTH 32
#define XPAR_AXI_VDMA_1_S_AXIS_S2MM_TDATA_WIDTH 32
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_1 0
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_5 0
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_6 1
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_7 1
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_9 0
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_13 0
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_14 1
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_INFO_15 1
#define XPAR_AXI_VDMA_1_ENABLE_DEBUG_ALL 0
#define XPAR_AXI_VDMA_1_ADDR_WIDTH 32

/******************************************************************/

/* Definitions for driver GPIO */
#define XPAR_XGPIO_NUM_INSTANCES 2

/* Definitions for peripheral AXI_GPIO_0 */
#define XPAR_AXI_GPIO_0_BASEADDR 0x41200000
#define XPAR_AXI_GPIO_0_HIGHADDR 0x4120FFFF
#define XPAR_AXI_GPIO_0_DEVICE_ID 0
#define XPAR_AXI_GPIO_0_INTERRUPT_PRESENT 1
#define XPAR_AXI_GPIO_0_IS_DUAL 1

/* Definitions for peripheral AXI_GPIO_1 */
#define XPAR_AXI_GPIO_1_BASEADDR 0x41210000
#define XPAR_AXI_GPIO_1_HIGHADDR 0x4121FFFF
#define XPAR_AXI_GPIO_1_DEVICE_ID 1
#define XPAR_AXI_GPIO_1_INTERRUPT_PRESENT 0
#define XPAR_AXI_GPIO_1_IS_DUAL 0

/******************************************************************/

/* Definitions for driver FILT */
#define XPAR_XFILT_NUM_INSTANCES 1

/* Definitions for peripheral FILT_0 */
#define XPAR_FILT_0_DEVICE_ID 0
#define XPAR_FILT_0_S_AXI_CONTROL_BUS_BASEADDR 0x43C10000
#define XPAR_FILT_0_S_AXI_CONTROL_BUS_HIGHADDR 0x43C1FFFF

/******************************************************************/


#ifdef __cplusplus
}
#endif
