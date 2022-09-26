/******************************************************************************************************************************
uthor: Tarek Mahmoud Ali
Date: 22/7/2022
Version: V_1
*******************************************************************************************************************************/
#ifndef GPIO_TYPES_H
#define GPIO_TYPES_H

typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
	PIN8,
	PIN9,
	PIN10,
	PIN11,
	PIN12,
	PIN13,
	PIN14,
	PIN15
}Pins;

typedef enum{
	PORTA,
	PORTB,
	PORTC
}Ports;

typedef enum{
	INPUT,
	OUTPUT,
	AF,
	ADC
}Modes;

typedef enum{
	PUSH_PULL,
	OPENDRAIN
}OTypes;

typedef enum{
	LOW,
	MEDUIM,
	HIGH,
	VHIGH
}OSpeeds;

typedef enum{
	FLOATING,
	PULLUP,
	PULLDOWN,

}PullModes;

typedef enum{
	LOW_LEVEL,
	HIGH_LEVEL
}OutputValues;


#endif
