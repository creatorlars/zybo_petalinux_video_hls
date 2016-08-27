// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.2
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XFILT_H
#define XFILT_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xfilt_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_bus_BaseAddress;
} XFilt_Config;
#endif

typedef struct {
    u32 Control_bus_BaseAddress;
    u32 IsReady;
} XFilt;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XFilt_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XFilt_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XFilt_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XFilt_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XFilt_Initialize(XFilt *InstancePtr, u16 DeviceId);
XFilt_Config* XFilt_LookupConfig(u16 DeviceId);
int XFilt_CfgInitialize(XFilt *InstancePtr, XFilt_Config *ConfigPtr);
#else
int XFilt_Initialize(XFilt *InstancePtr, const char* InstanceName);
int XFilt_Release(XFilt *InstancePtr);
#endif

void XFilt_Start(XFilt *InstancePtr);
u32 XFilt_IsDone(XFilt *InstancePtr);
u32 XFilt_IsIdle(XFilt *InstancePtr);
u32 XFilt_IsReady(XFilt *InstancePtr);
void XFilt_EnableAutoRestart(XFilt *InstancePtr);
void XFilt_DisableAutoRestart(XFilt *InstancePtr);


void XFilt_InterruptGlobalEnable(XFilt *InstancePtr);
void XFilt_InterruptGlobalDisable(XFilt *InstancePtr);
void XFilt_InterruptEnable(XFilt *InstancePtr, u32 Mask);
void XFilt_InterruptDisable(XFilt *InstancePtr, u32 Mask);
void XFilt_InterruptClear(XFilt *InstancePtr, u32 Mask);
u32 XFilt_InterruptGetEnabled(XFilt *InstancePtr);
u32 XFilt_InterruptGetStatus(XFilt *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
