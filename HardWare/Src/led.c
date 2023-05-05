/**
 * @Description  : LED控制逻辑
 * @Author       : WhiteWizard
 * @Version      : 0.0.1
 * @LastEditors  : WhiteWizard
 * @LastEditTime : 2023-05-05 22:31:27
 * @Copyright    : G AUTOMOBILE RESEARCH INSTITUTE CO.,LTD Copyright (c) 2023.
**/
#include "led.h"

//LED极性
#define LED_POL_POS 0
#define LED_POL_NEG 1

typedef struct
{
    GPIO_TypeDef* Port;
    uint16_t Pin;
    int polarity;
}led_t;

static led_t leds[LED_NUM] =	
{
    [LED_BLUE_L]	= {LED_B_L_GPIO_Port, LED_B_L_Pin, LED_POL_POS},
    [LED_GREEN_L]	= {LED_G_L_GPIO_Port, LED_G_L_Pin,  LED_POL_NEG},
    [LED_RED_L] 	= {LED_R_L_GPIO_Port, LED_R_L_Pin,  LED_POL_NEG},
    [LED_GREEN_R]	= {LED_G_R_GPIO_Port, LED_G_R_Pin, LED_POL_NEG},
    [LED_RED_R] 	= {LED_R_R_GPIO_Port, LED_R_R_Pin, LED_POL_NEG},
};

void ledSet(led_e led, bool value)
{
    if (led > LED_NUM)
        return;

    if (leds[led].polarity == LED_POL_NEG)
        value = !value;

    if(value)
        GPIO_SetBits(leds[led].port, leds[led].pin);
    else
        GPIO_ResetBits(leds[led].port, leds[led].pin);
}

void ledClearAll(void)
{
    for (uint8_t i = 0; i < LED_NUM; i++)
    {
        ledSet((led_e)i, 0);
    }
}

void ledSetAll(void)
{
    for(u8 i = 0; i < LED_NUM; i++)
    {
        ledSet((led_e)i, 1);
    }
}