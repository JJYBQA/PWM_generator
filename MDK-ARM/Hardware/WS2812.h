#ifndef __WS2812_H_
#define __WS2812_H_
#include "main.h"

/************************************************************
Copyright (C), 2013-2020, XINZHIYIKONG.Co.,Ltd.
@FileName: WS2812B.h
@Author  : 糊读虫 QQ:570525287
@Version : 1.0
@Date    : 2020-12-25
@Description: WS2812B全彩LED灯驱动
@Function List:
@History    : 
<author> <time> <version > <desc>


***********************************************************/



#define WS2812B_PORT		GPIOB
#define WS2812B_PIN			GPIO_PIN_2

#define WS2812B_Hi()		WS2812B_PORT->BSRR=WS2812B_PIN	//GPIO_ResetBits(LED1_PORT, LED1_PIN)
#define WS2812B_Low()		WS2812B_PORT->BRR=WS2812B_PIN	//GPIO_SetBits(LED1_PORT, LED1_PIN)

//颜色
typedef struct color{
	uint8_t G;
	uint8_t R;
	uint8_t B;
}Color_TypeDef;

//------------------------
#define PIXEL_NUM	1	//LED灯的个数

void WS2812B_Init(void);
void WS2812B_Reset(void);
void WS2812B_WriteColor(Color_TypeDef *pColor);
void WS2812B_RefreshPixel(void);

void WS2812B_FillColor(uint16_t start,uint16_t end,Color_TypeDef *pColor);
void WS2812B_MovePixel(uint8_t dir);

void WS2812B_Test(void);






#endif
