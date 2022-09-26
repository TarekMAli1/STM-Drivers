/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NVIC_Interface.h
 *       Module:  NVIC
 *
 *  Description:  header file for NVIC Module    
 *  
 *********************************************************************************************************************/
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H


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
void IntCrtl_Init	     	   (void);
void NVIC_DisableInterrupt     (u8 Interrupt_NO);
void NVIC_SetInterruptPending  (u8 Interrupt_NO);
void NVIC_ResetInterruptPending(u8 Interrupt_NO);
#endif  /* NVIC_INTERFACE_H */

/**********************************************************************************************************************
 *  END OF FILE: NVIC_Interface.h
 *********************************************************************************************************************/
