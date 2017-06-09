#include "LPC11xx.h"         // Device header
#include "ADC.h"
#include <stdio.h>
#include <string.h>
#include "Systick.h"
#include "UART.h"
#include "LCD.h"
#include "temp.h"


int main (void)
{
	int count;
	  ADC_Init();
	  Systick_Init();
	  UART_Init();
	  LCD_Init();
    
 
 //PIOINT3_IRQHandler()£»
	while(1)	
	{
		
	temp();	
	 LCD_DisplayStr(0,0,GcRcvBuf);
		
			
	}
}
