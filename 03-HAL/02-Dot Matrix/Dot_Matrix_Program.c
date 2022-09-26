#include "STD_TYPES.h"
#include "Dot_Matrix_Config.h"
#include "Dot_Matrix_Interface.h"
#include "GPIO_interface.h"
#include "SYSTICK_Config.h"

void Dot_Matrix_Send_Data(u8* Rows){
	for (u8 i=0;i<50;i++){
		GPIO_SetPortValue(Columns_Port,0xff);
		/**********zero column***************/
		SetPinValue(Columns_Port, COL_0 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[0]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_0 ,HIGH_LEVEL);
		/**********first column***************/
		SetPinValue(Columns_Port, COL_1 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[1]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_1 ,HIGH_LEVEL);
		/**********second column***************/
		SetPinValue(Columns_Port, COL_2 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[2]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_2 ,HIGH_LEVEL);
		/**********third column***************/
		SetPinValue(Columns_Port, COL_3 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[3]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_3 ,HIGH_LEVEL);
		/**********forth column***************/
		SetPinValue(Columns_Port, COL_4 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[4]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_4 ,HIGH_LEVEL);
		/**********fifth column***************/
		SetPinValue(Columns_Port, COL_5 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[5]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_5 ,HIGH_LEVEL);
		/**********sixth column***************/
		SetPinValue(Columns_Port, COL_6 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[6]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_6 ,HIGH_LEVEL);
		/**********seventh column***************/
		SetPinValue(Columns_Port, COL_7 ,LOW_LEVEL);
		GPIO_SetPortValue(Rows_Port,Rows[7]);
		SYSTICK_Delay_Millisecond(3);
		SetPinValue(Columns_Port, COL_7 ,HIGH_LEVEL);
	}
}
