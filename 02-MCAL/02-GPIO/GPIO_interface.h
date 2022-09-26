/******************************************************************************************************************************
Author: Tarek Mahmoud Ali
Date: 22/7/2022
Version: V_1
*******************************************************************************************************************************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H
#include "GPIO_TYPES.h"
typedef struct
{
	Ports PORT; // A,B,C
	Pins PIN;	 // PIN0, PIN1...
	Modes MODE; //out, input
	OTypes TYPE; //Opendrain, pushpull GPIOx_OTYPER outputtype
	OSpeeds SPEED;//low , mid, high, veryhigh GPIOx_OSPEEDR
	PullModes PULL_UP_DOWN;//GPIOx_PUPDR
}pinInfo;

void SetPinMode(void);
void SetPinValue(Ports Port,Pins pin,OutputValues value);
OutputValues GetPinValue(Ports Port,Pins pin);
void GPIO_SetPortValue(Ports Port,OutputValues value);

#endif
