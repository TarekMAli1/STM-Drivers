/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC_Config.h
 *       Module:  NVIC
 *
 *  Description:  configuration header file for NVIC Module    
 *  
 *********************************************************************************************************************/
#ifndef NVIC_CONFIG_H
#define NVIC_CONFIG_H
#include "D:\engineering\Arm IMT\project\01-LIB\01- TYPES\STD_TYPES.h"


#define	xxxx 	0 //16 group 0 sub
#define	xxxy	1 //8  group 2 sub
#define	xxyy 	2 //4  group 4 sub
#define	xyyy 	3 //2  group 8 sub
#define	yyyy 	4 //0  group 16 sub


#define Group_Mode       xxxy
#define No_Of_Interrupts 1

 typedef struct {
 	u8 Int_No;
 	u8 Int_GroupPriority;
 	u8 Int_SubGroupPriority;
 }Enabled_Interrupts_t;

#endif
