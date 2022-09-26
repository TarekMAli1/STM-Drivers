/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC_Private.h
 *       Module:  NVIC
 *
 *  Description:  Registers header file for NVIC Registers definition    
 *  
 *********************************************************************************************************************/
#ifndef NVIC_PRIVATE_H
#define NVIC_PRIVATE_H

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef struct{
	u32 EN[8];
}Enable_t;
typedef struct{
	u32 DIS[8];	
}Disable_t;
typedef struct{
	u32 PEN[8];
}Pend_t;
typedef struct{
	u32 UNPEN[8];
}UNPend_t;
typedef struct{
	u32 ACT[8];	
}Active_t;
typedef struct{
	u8 Pri[84];
}Priority_t;
/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS            		 0xE000E000
#define Enable 			                            ((volatile Enable_t*)0xE000E100)
#define Disable 			                        ((volatile Disable_t*)0xE000E180)
#define Pend 			                            ((volatile Pend_t*)0xE000E200)
#define UNPend 			                            ((volatile UNPend_t*)0xE000E280)
#define Active										((volatile Active_t*)0xE000E300)
#define Priority									((volatile Priority_t*)0xE000E400)	
#define AIRCR                             	       *((volatile u32*)(CORTEXM4_PERI_BASE_ADDRESS+0xD0C))
#endif
