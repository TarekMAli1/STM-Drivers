/******************************************************************************************************************************
Author: Tarek Mahmoud Ali
Date: 22/7/2022
Version: V_1
*******************************************************************************************************************************/
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H
/* Base address*/
#define RCC_Base_Adderss 	0x40023800
typedef struct{
	u32 CR;
	u32 PLLCFGR;
	u32 CFGR;
	u32 CIR;
	u32 AHB1RSTR;
	u32 AHB2RSTR;
	u32 		;
	u32			;
	u32 RCC_APB1RSTR;
	u32 RCC_APB2RSTR;
	u32 		;
	u32 		;
	u32 RCC_AHB1ENR;
	u32 RCC_AHB2ENR;
	u32 		;
	u32			;
	u32	RCC_APB1ENR;
	u32 RCC_APB2ENR;
	u32 		;
	u32 		;
	u32 RCC_AHB1LPENR;
	u32 RCC_AHB2LPENR;
	u32 		;
	u32 		;
	u32 RCC_APB1LPENR;
	u32 RCC_APB2LPENR;
	u32 		;
	u32 		;
	u32 RCC_BDCR;
	u32 RCC_CSR	;
	u32 		;
	u32 		;
	u32 RCC_SSCGR;
	u32 RCC_PLLI2SCFGR;
	u32 		;
	u32 RCC_DCKCFGR;
}RCC_TYPE;

#define		RCC_HSE_CRYSTAL		0
#define		RCC_HSE_RC			1
#define		RCC_HSI				2
#define		RCC_PLL				3

#define		RCC_PLL_HSI			0
#define		RCC_PLL_HSE			1	
/******************************************************Pin definintion**********************************************************/
#define HSI_ON	0
#define HSI_RDI	0
#define HSE_ON	16
#define HSE_RDI	17
#define PLL_ON	24
#define PLL_RDI	17

//#define RCC    			(*(volatile RCC_TYPE*const)RCC_Base_Adderss)	// *(RCC.CR)=0x20
#define RCC    				((volatile RCC_TYPE*const)RCC_Base_Adderss)		// RCC->CR=0x20	
#define AHB					(*(volatile u32*const)(RCC_Base_Adderss+0x30))
#endif
