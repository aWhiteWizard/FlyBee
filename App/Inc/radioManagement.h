/**
 * @Description  :  
 * @Author       : WhiteWizard
 * @Version      : 0.0.1
 * @LastEditors  : WhiteWizard
 * @LastEditTime : 2023-05-05 21:15:35
 * @Copyright    : G AUTOMOBILE RESEARCH INSTITUTE CO.,LTD Copyright (c) 2023.
**/
#pragma anon_unions

#include "atkPackage.h"
#ifndef __POWERMANAGER_H__
#define __POWERMANAGER_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    poweron = 0,
    poweroff = 1,
    lowpower = 2,
    charging = 3
}PMstatue;

typedef __packed struct __PMsysinfo
{
    __packed union
    {
        unsigned char flag;
        __packed struct 
        {
            unsigned char batPresent : 1;
            unsigned char batcharging : 1;
        };
    };
    float vBat;
}PMsysinfo;

void pmInit();
PMstatue getPowerStatue();

#endif
