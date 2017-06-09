#ifndef __time_H
#define __time_H
#include "LPC11xx.h" 
extern void DisplayScan();
extern void TimeToDisplayBuffer(void);
void TIMER32_0_IRQHandler(void);
void Timer0Init(void);
#endif
