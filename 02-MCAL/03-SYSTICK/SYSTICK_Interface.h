/*
 * SYSTICK_interface.h
 *
 *  Created on: Aug 22, 2022
 *      Author: Tarek Mahmoud
 */

#ifndef SYSTICK_INTERFACE_H
#define SYSTICK_INTERFACE_H


void SYSTICK_Initialize(void);
void SYSTICK_SychronousDelay(u32 Ticks);
void SYSTICK_AsychronousDelay(u32 Ticks, void (*ptr) (void));
void SYSTICK_Stop(void);
void SYSTICK_Delay_Millisecond(u8 Millisecond);
void SYSTICK_Delay_Microsecond(u8 Microsecond);
#endif /* SYSTICK_INTERFACE_H */
