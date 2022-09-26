
/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  NVIC_Program.c
 *        \brief  Nested Vector Interrupt Controller Driver
 *
 *      \details  The Driver Configure All MCU interrupts Priority into gorups and subgroups
 *                Enable NVIC Interrupt Gate for Peripherals
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "STD_TYPES.h"
#include "NVIC_Interface.h"
#include "NVIC_Private.h"
#include "NVIC_Config.h"
#include "BIT_MATH.h"
/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/	

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/******************************************************************************
* \Syntax          : void IntCrtl_Init(void)                                      
* \Description     : initialize Nvic\SCB Module by parsing the Configuration 
*                    into Nvic\SCB registers                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                     
* \Parameters (out): None                                                      
* \Return value:   : None
*******************************************************************************/
void IntCrtl_Init(void)
{
    extern Enabled_Interrupts_t Enabled_Interrupts[No_Of_Interrupts];
    u8 Interrupt_Number,Int_GroupPri,Int_SubGroupPri;
	/*TODO Configure Grouping\SubGrouping System in APINT register in SCB*/
	#if (Group_Mode == xxxx)
	  AIRCR = (0x5FA<<16)|(0x0000);
	#elif (Group_Mode == xxxy)
	  AIRCR = (0x5FA<<16)|(0x0400);
	#elif(Group_Mode ==xxyy )
		AIRCR = (0x5FA<<16)|(0x0500);
	#elif(Group_Mode == xyyy)
		AIRCR = (0x5FA<<16)|(0x0600);
	#elif(Group_Mode == yyyy)
		AIRCR = (0x5FA<<16)|(0x0700);
	#endif
  /*TODO : Assign Group\Subgroup priority in NVIC_PRIx Nvic and SCB_SYSPRIx Registers*/  
			for(u8 i=0;i<No_Of_Interrupts;i++){
				Interrupt_Number=Enabled_Interrupts[i].Int_No;
				Int_GroupPri=Enabled_Interrupts[i].Int_GroupPriority;
				Int_SubGroupPri=Enabled_Interrupts[i].Int_SubGroupPriority;
				#if (Group_Mode == xxxx)
					Priority->Pri[Interrupt_Number]|=(Int_GroupPri<<4);
				#elif (Group_Mode == xxxy)
					Priority->Pri[Interrupt_Number]|=(Int_GroupPri<<5);
					Priority->Pri[Interrupt_Number]|=(Int_SubGroupPri<<4);
				#elif(Group_Mode ==xxyy )
					Priority->Pri[Interrupt_Number]|=(Int_GroupPri<<6);
					Priority->Pri[Interrupt_Number]|=(Int_SubGroupPri<<4);
				#elif(Group_Mode == xyyy)
					Priority->Pri[Interrupt_Number]|=(Int_GroupPri<<7);
					Priority->Pri[Interrupt_Number]|=(Int_SubGroupPriority<<4);
				#elif(Group_Mode == yyyy)
					Priority->Pri[Interrupt_Number]|=(Int_SubGroupPriority<<4);
				#endif
				Enable->EN[Interrupt_Number/32]=(1<<(Interrupt_Number%32));
			}
}

void NVIC_DisableInterrupt(u8 Interrupt_NO){
	Disable->DIS[Interrupt_NO/32]=(1<<Interrupt_NO%32);
}

u8 NVIC_GetInterruptStatus(u8 Interrupt_NO){
	return GET_BIT(Active->ACT[Interrupt_NO/32],(1<<Interrupt_NO%32));
}
void NVIC_SetInterruptPending(u8 Interrupt_NO){
	Pend->PEN[Interrupt_NO/32]=(1<<Interrupt_NO%32);
}

void NVIC_ResetInterruptPending(u8 Interrupt_NO){
	UNPend->UNPEN[Interrupt_NO/32]=(1<<Interrupt_NO%32);
}



/**********************************************************************************************************************
 *  END OF FILE: NVIC_Program.c
 *********************************************************************************************************************/
