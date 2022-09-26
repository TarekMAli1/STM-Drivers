#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "GPIO_TYPES.h"

extern pinInfo EnabledPins[NUMBER_OF_USED_PINS];
void SetPinMode(void){
for(u8 counter=0; counter<NUMBER_OF_USED_PINS;counter++){
		switch(EnabledPins[counter].PORT)
		{
			case PORTA:
				GPIOA -> MODER &=~ ((0b11)<<((EnabledPins[counter].PIN) * 2));
				GPIOA -> MODER |=((EnabledPins[counter].MODE)<<((EnabledPins[counter].PIN) * 2));

				if(EnabledPins[counter].TYPE != NOT_USED)
					{
						CLR_BIT(GPIOA -> OTYPER, EnabledPins[counter].PIN);
						GPIOA -> OTYPER |=((EnabledPins[counter].TYPE)<<((EnabledPins[counter].PIN)));

						GPIOA -> OSPEEDR  &=~ ((0b11)<<((EnabledPins[counter].PIN) * 2));
						GPIOA -> OSPEEDR |=((EnabledPins[counter].SPEED)<<((EnabledPins[counter].PIN) * 2));
					}
					GPIOA -> PUPDR &= ~((0b11)                  <<((EnabledPins[counter].PIN) * 2));
				    GPIOA -> PUPDR |=  ((EnabledPins[counter].PULL_UP_DOWN)<<((EnabledPins[counter].PIN) * 2));
				break;
			case PORTB:
				GPIOB -> MODER &=~((0b11)<<((EnabledPins[counter].PIN) * 2));
				GPIOB -> MODER |=((EnabledPins[counter].MODE)<<((EnabledPins[counter].PIN) * 2));

				if(EnabledPins[counter].TYPE != NOT_USED)
					{
						CLR_BIT(GPIOB -> OTYPER, EnabledPins[counter].PIN);
						GPIOB -> OTYPER |=((EnabledPins[counter].TYPE)<<((EnabledPins[counter].PIN)));

						GPIOB -> OSPEEDR  &=~ ((0b11)<<((EnabledPins[counter].PIN) * 2));
						GPIOB -> OSPEEDR |=((EnabledPins[counter].SPEED)<<((EnabledPins[counter].PIN) * 2));
					}
					GPIOB -> PUPDR &= ~((0b11)                  <<((EnabledPins[counter].PIN) * 2));
					GPIOB -> PUPDR |=  ((EnabledPins[counter].PULL_UP_DOWN)<<((EnabledPins[counter].PIN) * 2));
				break;
			case PORTC:
				GPIOC -> MODER &=~ ((0b11)<<((EnabledPins[counter].PIN) * 2));
				GPIOC -> MODER |=((EnabledPins[counter].MODE)<<((EnabledPins[counter].PIN) * 2));

				if(EnabledPins[counter].TYPE != NOT_USED)
					{
						CLR_BIT(GPIOC -> OTYPER, EnabledPins[counter].PIN);
						GPIOC -> OTYPER |=((EnabledPins[counter].TYPE)<<((EnabledPins[counter].PIN)));

						GPIOC -> OSPEEDR  &=~ ((0b11)<<((EnabledPins[counter].PIN) * 2));
						GPIOC -> OSPEEDR |=((EnabledPins[counter].SPEED)<<((EnabledPins[counter].PIN) * 2));
					}
				GPIOC -> PUPDR &= ~((0b11)                  <<((EnabledPins[counter].PIN) * 2));
				GPIOC -> PUPDR |=  ((EnabledPins[counter].PULL_UP_DOWN)<<((EnabledPins[counter].PIN) * 2));
				break;
			default:
				break;
		}
	}
}

void SetPinValue(Ports Port,Pins pin,OutputValues value){
	switch(Port){
		case PORTA:
			if(value == LOW_LEVEL )		GPIOA->BSRR=(1<<(pin+16));
			else						GPIOA->BSRR=(1<<pin);
			break;
		case PORTB:
			if(value == LOW_LEVEL )		GPIOB->BSRR=(1<<(pin+16));
			else						GPIOB->BSRR=(1<<pin);
			break;
		case PORTC:
			if(value == LOW_LEVEL )		GPIOC->BSRR=(1<<(pin+16));
			else						GPIOC->BSRR=(1<<pin);
			break;
	}
}

OutputValues GetPinValue(Ports Port,Pins pin){
	switch(Port){
		case PORTA:
			if(GPIOA->IDR>>pin == LOW_LEVEL )		return LOW_LEVEL;
			else									return HIGH_LEVEL;
		case PORTB:
			if(GPIOB->IDR>>pin == LOW_LEVEL )		return LOW_LEVEL;
			else									return HIGH_LEVEL;
		case PORTC:
			if(GPIOB->IDR>>pin == LOW_LEVEL )		return LOW_LEVEL;
			else									return HIGH_LEVEL;
		default:
			return LOW_LEVEL;
	}
}
void GPIO_SetPortValue(Ports Port,OutputValues value){
	switch (Port){
	     case PORTA :GPIOA->ODR = value; break;
	     case PORTB :GPIOB->ODR = value; break;
         case PORTC :GPIOC->ODR = value; break;
	}
}
