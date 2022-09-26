#ifndef SYSTICK_CONGIG_H
#define SYSTICK_CONFIG_H
typedef enum {
	AHB_Over_8,
	AHB
};
#define SYSTICK_Frequency	AHB_Over_8

void SYSTICK_Initialize(void);
void SYSTICK_SychronousDelay(u32 Ticks);
void SYSTICK_AsychronousDelay(u32 Ticks, void (*ptr) (void));
void SYSTICK_Stop(void);
#endif
