/******************************************************************************************************************************
Author: Tarek Mahmoud Ali
Date: 22/7/2022
Version: V_1
*******************************************************************************************************************************/
#ifndef GPIO_PRIVATE_H
#define GPIO_PRIVATE_H
/* Base address*/
#define GPIOA_Base_Adderss 	0x40020000
#define GPIOB_Base_Adderss 	0x40020400
#define GPIOC_Base_Adderss 	0x40020800
typedef struct{
	u32 MODER  	;
	u32 OTYPER 	;
	u32 OSPEEDR	;
	u32 PUPDR  	;
	u32 IDR    	;
	u32 ODR    	;
	u32 BSRR   	;
	u32 LCKR	;
	u32 AFLR	;
	u32 AFHR	;
}GPIO_TYPE;

#define GPIOA    				((volatile GPIO_TYPE*const)GPIOA_Base_Adderss)		// GPIOA->MODER=0x20	
#define GPIOB    				((volatile GPIO_TYPE*const)GPIOB_Base_Adderss)
#define GPIOC    				((volatile GPIO_TYPE*const)GPIOC_Base_Adderss)
#endif
