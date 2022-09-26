/******************************************************************************************************************************
Author: Tarek Mahmoud Ali
Date: 22/7/2022
Version: V_1
*******************************************************************************************************************************/
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

typedef enum{
	 GPIOAEN,
	 GPIOBEN,
	 GPIOCEN,
	 GPIODEN,
	 GPIOEEN,
	 GPIOHEN,
	 CRCEN,
	 DMA1EN,
	 DMA2EN,
	 OTGFSEN,
	 TIM2EN,
	 TIM3EN,
	 TIM4EN,
	 TIM5EN,
	 WWDGEN,
	 SPI2EN,
	 SPI3EN,
	 USART2EN,
	 I2C1EN,
	 I2C2EN,
	 I2C3EN,
	 PWREN,
	 TIM1EN,
	 USART1EN,
	 USART6EN,
	 ADC1EN,
	 SDIOEN,
	 SPI1EN,
	 SPI4EN,
	 SYSCFGEN,
	 TIM9EN,
	 TIM10EN,
	 TIM11EN
}PERIPHERAL;


void RCC_init(); //initialise clock HSI,HSE,PLL 
void RCC_enablePeripheralClock(PERIPHERAL perId);
void RCC_disablePeripheralClock(PERIPHERAL perId);


#endif
