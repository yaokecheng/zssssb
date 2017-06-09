#ifndef __TEMP_H
#define __TEMP_H	
#include "LPC11xx.h"
#include "stdio.h"
#include "uart.h"
#include "lcd.h"
extern char  GcRcvBuf[20];
extern uint32_t temp(void);
void UART_SendStr(char *pucStr);
void LCD_P6x8Str(uint8_t  x,uint8_t y,uint8_t ch[]);
#endif
