#include "LPC11xx.h"                    // Device header
#include "Systick.h"
#include "LCD.h"
#include "delay.h"
 void Systick_Init(void)
	 {
	 LPC_GPIO3->DIR &=~(1<<1);
	 LPC_GPIO3->IE  |= (1<<1);
	 LPC_GPIO3->IS  &=~(1<<1);
	 LPC_GPIO3->IEV &=~(1<<1);
		 
   LPC_GPIO3->DIR &=~(1<<2);
	 LPC_GPIO3->IE  |= (1<<2);
	 LPC_GPIO3->IS  &=~(1<<2);
	 LPC_GPIO3->IEV &=~(1<<2);
	NVIC_EnableIRQ (EINT3_IRQn ); 		 
	 }
	 
	 
void PIOINT3_IRQHandler()
{
   if((LPC_GPIO3->MIS &(1<<1))==(1<<1))
 {
	 LCD_DisplayStr(0,0,"yaokecheng");
	
	 LPC_GPIO3->IC =(1<<1);
 }	



//	
// if((LPC_GPIO3->MIS &(1<<2))==(1<<2))
// {
//	 LCD_DisplayStr(0,0,"zhangyuqing");
//	 LPC_GPIO3->IC =(1<<2);
// }	

}

