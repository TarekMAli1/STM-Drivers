#include "STD_TYPES.h"
#include "BIT_MATH.h"
//#include "ERROR_STATUS"

#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"

void RCC_init(){
	#if (RCC_CLOCK_SYSTEM==RCC_HSE_CRYSTAL)
		SET_BIT(RCC->CR,HSE_ON);
		while(!GET_BIT(RCC->CR,HSE_RDI));
		SET_BIT(RCC->CFGR,0);	//c	onfigure system clock HSE
	#elif(RCC_CLOCK_SYSTEM==RCC_HSE_RC)
		SET_BIT(RCC->CR,HSE_ON);
		SET_BIT(RCC->CR,18);	//SET BYP bit
		while(!GET_BIT(RCC->CR,HSE_RDI));
		SET_BIT(RCC->CFGR,0);	//configure system clock HSE
	#elif(RCC_CLOCK_SYSTEM==RCC_HSI)
		SET_BIT(RCC->CR,HSI_ON);
		while(!GET_BIT(RCC->CR,HSI_RDI));
		SET_BIT(RCC->CR,7);
	#elif(RCC_CLOCK_SYSTEM==RCC_PLL)
		SET_BIT(RCC->CR,PLL_ON);
		while(!GET_BIT(RCC->CR,PLL_RDI));
		#if RCC_CLOCK_PLL_INPUT==RCC_PLL_HSI
			CLR_BIT(RCC->PLLCFGR,22);	//configure system clock HSE
		#elif RCC_CLOCK_PLL_INPUT==RCC_PLL_HSI
			SET_BIT(RCC->PLLCFGR,22);	//configure system clock HSE
		#endif
	#endif 
}

void RCC_enablePeripheralClock(PERIPHERAL perId){
	switch(perId){
		case GPIOAEN: 
			SET_BIT(AHB,0);
			break;
		case GPIOBEN: 
			SET_BIT(AHB,1);
			break;
		case GPIOCEN: 
			SET_BIT(RCC->RCC_AHB1ENR,2);
			break;
		case GPIODEN: 
			SET_BIT(RCC->RCC_AHB1ENR,3);
			break;
		case GPIOEEN: 
			SET_BIT(RCC->RCC_AHB1ENR,4);
			break;
		case GPIOHEN: 
			SET_BIT(RCC->RCC_AHB1ENR,7);
			break;
		case CRCEN: 
			SET_BIT(RCC->RCC_AHB1ENR,12);
			break;
		case DMA1EN: 
			SET_BIT(RCC->RCC_AHB1ENR,21);
			break;
		case DMA2EN: 
			SET_BIT(RCC->RCC_AHB1ENR,22);
			break;
		case OTGFSEN: 
			SET_BIT(RCC->RCC_AHB1ENR,7);
			break;
		case TIM2EN: 
			SET_BIT(RCC->RCC_APB1ENR,0);
			break;
		case TIM3EN: 
			SET_BIT(RCC->RCC_APB1ENR,1);
			break;
		case TIM4EN: 
			SET_BIT(RCC->RCC_APB1ENR,2);
			break;
		case TIM5EN: 
			SET_BIT(RCC->RCC_APB1ENR,3);
			break;
		case WWDGEN: 
			SET_BIT(RCC->RCC_APB1ENR,11);
			break;
		case SPI2EN: 
			SET_BIT(RCC->RCC_APB1ENR,14);
			break;
		case SPI3EN: 
			SET_BIT(RCC->RCC_APB1ENR,15);
			break;
		case USART2EN: 
			SET_BIT(RCC->RCC_APB1ENR,17);
			break;
		case I2C1EN: 
			SET_BIT(RCC->RCC_APB1ENR,21);
			break;
		case I2C2EN: 
			SET_BIT(RCC->RCC_APB1ENR,22);
			break;
		case I2C3EN: 
			SET_BIT(RCC->RCC_APB1ENR,23);
			break;
		case PWREN: 
			SET_BIT(RCC->RCC_APB1ENR,28);
			break;
		case TIM1EN: 
			SET_BIT(RCC->RCC_APB2ENR,0);
			break;
		case USART1EN: 
			SET_BIT(RCC->RCC_APB2ENR,4);
			break;
		case USART6EN: 
			SET_BIT(RCC->RCC_APB2ENR,5);
			break;
		case ADC1EN: 
			SET_BIT(RCC->RCC_APB2ENR,8);
			break;
		case SDIOEN: 
			SET_BIT(RCC->RCC_APB2ENR,11);
			break;
		case SPI1EN: 
			SET_BIT(RCC->RCC_APB2ENR,12);
			break;
		case SPI4EN: 
			SET_BIT(RCC->RCC_APB2ENR,13);
			break;
		case SYSCFGEN: 
			SET_BIT(RCC->RCC_APB2ENR,14); 
			break;
		case TIM9EN: 
			SET_BIT(RCC->RCC_APB2ENR,16);
			break;
		case TIM10EN: 
			SET_BIT(RCC->RCC_APB2ENR,17);
			break;
		case TIM11EN: 
			SET_BIT(RCC->RCC_APB2ENR,18);
			break;
		default:
			break;
	}	
}

void RCC_disablePeripheralClock(PERIPHERAL perId){
	switch(perId){
		case GPIOAEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,0);
			break;
		case GPIOBEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,1);
			break;
		case GPIOCEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,2);
			break;
		case GPIODEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,3);
			break;
		case GPIOEEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,4);
			break;
		case GPIOHEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,7);
			break;
		case CRCEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,12);
			break;
		case DMA1EN: 
			CLR_BIT(RCC->RCC_AHB1ENR,21);
			break;
		case DMA2EN: 
			CLR_BIT(RCC->RCC_AHB1ENR,22);
			break;
		case OTGFSEN: 
			CLR_BIT(RCC->RCC_AHB1ENR,7);
			break;
		case TIM2EN: 
			CLR_BIT(RCC->RCC_APB1ENR,0);
			break;
		case TIM3EN: 
			CLR_BIT(RCC->RCC_APB1ENR,1);
			break;
		case TIM4EN: 
			CLR_BIT(RCC->RCC_APB1ENR,2);
			break;
		case TIM5EN: 
			CLR_BIT(RCC->RCC_APB1ENR,3);
			break;
		case WWDGEN: 
			CLR_BIT(RCC->RCC_APB1ENR,11);
			break;
		case SPI2EN: 
			CLR_BIT(RCC->RCC_APB1ENR,14);
			break;
		case SPI3EN: 
			CLR_BIT(RCC->RCC_APB1ENR,15);
			break;
		case USART2EN: 
			CLR_BIT(RCC->RCC_APB1ENR,17);
			break;
		case I2C1EN: 
			CLR_BIT(RCC->RCC_APB1ENR,21);
			break;
		case I2C2EN: 
			CLR_BIT(RCC->RCC_APB1ENR,22);
			break;
		case I2C3EN: 
			CLR_BIT(RCC->RCC_APB1ENR,23);
			break;
		case PWREN: 
			CLR_BIT(RCC->RCC_APB1ENR,28);
			break;
		case TIM1EN: 			
			CLR_BIT(RCC->RCC_APB2ENR,0);
			break;
			CLR_BIT(RCC->RCC_APB2ENR,4);
			break;
		case USART6EN: 
			CLR_BIT(RCC->RCC_APB2ENR,5);
			break;
		case ADC1EN: 
			CLR_BIT(RCC->RCC_APB2ENR,8);
			break;
		case SDIOEN: 
			CLR_BIT(RCC->RCC_APB2ENR,11);
			break;
		case SPI1EN: 
			CLR_BIT(RCC->RCC_APB2ENR,12);
			break;
		case SPI4EN: 
			CLR_BIT(RCC->RCC_APB2ENR,13);
			break;
		case SYSCFGEN: 
			CLR_BIT(RCC->RCC_APB2ENR,14);
			break;
		case TIM9EN: 
			CLR_BIT(RCC->RCC_APB2ENR,16);
			break;
		case TIM10EN: 
			CLR_BIT(RCC->RCC_APB2ENR,17);
			break;
		case TIM11EN: 
			CLR_BIT(RCC->RCC_APB2ENR,18);
			break;
		default:
			break;
	}
}
