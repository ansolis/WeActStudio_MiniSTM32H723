#pragma once

#include "st7735.h"
#include <stdint.h>

// Red:   0xF800, binary: 1111_1000_0000_0000, 5 bits, 0 - 0x1F
// Green: 0x07E0, binary: 0000_0111_1110_0000, 6 bits, 0 - 0x3F
// Blue:  0x001F, binary: 0000_0000_0001_1111, 5 bits, 0 - 0x1F

#define WHITE         	 0xFFFF
#define BLACK         	 0x0000
#define BLUE         	 0x001F  // Binary 0000_0000_0001_1111
#define BRED             0XF81F
#define GRED 			 0XFFE0
#define GBLUE			 0X07FF
#define RED           	 0xF800  // Binary 1111_1000_0000_0000
#define MAGENTA       	 0xF81F
#define GREEN         	 0x07E0  // Binary 0000_0111_1110_0000
#define CYAN          	 0x7FFF
#define YELLOW        	 0xFFE0
#define BROWN 			 0XBC40
#define BRRED 			 0XFC07
#define GRAY  			 0X8430
#define DARKBLUE      	 0X01CF
#define LIGHTBLUE      	 0X7D7C
#define GRAYBLUE       	 0X5458

extern ST7735_Object_t st7735_pObj;
extern uint32_t        st7735_id;

extern uint16_t FOREGROUND_COLOR;
extern uint16_t BACKGROUND_COLOR;

void     LCD_Test(void);
void     LCD_SetBrightness(uint32_t Brightness);
uint32_t LCD_GetBrightness(void);
void     LCD_Light(uint32_t Brightness_Dis, uint32_t time);
void     LCD_ShowChar(uint16_t x, uint16_t y, uint8_t num, uint8_t size, uint8_t mode);
void     LCD_ShowString(uint16_t x, uint16_t y, uint16_t width, uint16_t height, uint8_t size,
                        uint8_t* p);
extern ST7735_Ctx_t ST7735Ctx;
