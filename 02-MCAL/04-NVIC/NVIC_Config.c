/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC_Config.c
 *       Module:  NVIC
 *
 *  Description:  configuration source file for NVIC Module    
 *  
 *********************************************************************************************************************/
#include "NVIC_Config.h"

 Enabled_Interrupts_t Enabled_Interrupts[No_Of_Interrupts]=
 {
     {.Int_No=6, .Int_GroupPriority=3,.Int_SubGroupPriority=0},

 };
