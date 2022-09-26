#include "STD_TYPES.h"
#include "STP_Config.h"
#include "GPIO_interface.h"
#include "SYSTICK_Config.h"
void STP_sendData(u8 data){

	u8 Selected_Bit=0;
	for(s8 i=7;i>=0;i--){
		Selected_Bit=(data&(1<<i))>>i;
		SetPinValue(Used_Port,SerialInputData,Selected_Bit);
		SetPinValue(Used_Port,Shift_Clock,HIGH_LEVEL);
	    SetPinValue(Used_Port,Shift_Clock,LOW_LEVEL);
	}
	 SetPinValue(Used_Port,Latch_Clock,HIGH_LEVEL);
	 SYSTICK_SychronousDelay(3);
	 SetPinValue(Used_Port,Latch_Clock,LOW_LEVEL);
	 SYSTICK_SychronousDelay(100);
}
