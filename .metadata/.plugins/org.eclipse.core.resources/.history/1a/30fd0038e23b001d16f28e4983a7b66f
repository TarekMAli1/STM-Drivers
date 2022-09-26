#include "STD_TYPES.h"
#include "SYSTICK_Config.h"
#include "SYSTICK_Interface.h"
#include "SYSTICK_Private.h"
void (*Systick_Notification) (void);
void SYSTICK_Initialize(void){
	SYSTICK->CTRL.B.ClockSrc=SYSTICK_Frequency;
}
void SYSTICK_SychronousDelay(u32 Ticks){
	SYSTICK->LOAD.B.RELOAD=Ticks;
	SYSTICK->CTRL.B.Enable=1;
	while(SYSTICK->CTRL.B.CountFlag==0);
}
void SYSTICK_Delay_Millisecond(u8 Millisecond){
	if(SYSTICK_Frequency==AHB)
		SYSTICK_SychronousDelay(Millisecond*24000);
	else
		SYSTICK_SychronousDelay(2500*Millisecond);
}
void SYSTICK_Delay_Microsecond(u8 Microsecond){
	if(SYSTICK_Frequency==AHB)
		SYSTICK_SychronousDelay(Microsecond*24);
	else
		SYSTICK_SychronousDelay(2.5*Microsecond);
}
void SYSTICK_AsychronousDelay(u32 Ticks, void (*ptr) (void)){
	SYSTICK->LOAD.B.RELOAD=Ticks;
	SYSTICK->CTRL.B.Enable=1;
	SYSTICK->CTRL.B.TickInt=1;
	Systick_Notification=ptr;
}
void SYSTICK_Stop(void){
	SYSTICK->CTRL.B.Enable=1;
}
Systick_Handler(){
	Systick_Notification();
}
