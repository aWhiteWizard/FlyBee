/**
 * @Description  : LED控制逻辑
 * @Author       : WhiteWizard
 * @Version      : 0.0.1
 * @LastEditors  : WhiteWizard
 * @LastEditTime : 2023-05-05 21:59:37
 * @Copyright    : G AUTOMOBILE RESEARCH INSTITUTE CO.,LTD Copyright (c) 2023.
**/
#ifndef __LED_H
#define __LED_H

#include "main.h"
#include <stdbool.h>

#define LED_NUM 5

typedef enum 
{
	LED_BLUE_L = 0, 
	LED_GREEN_L, 
	LED_RED_L, 
	LED_GREEN_R, 
	LED_RED_R,
} led_e;


void ledSet(led_e led, bool value);	//设置某个LED的状态
void ledClearAll(void);
void ledSetAll(void);

#endif