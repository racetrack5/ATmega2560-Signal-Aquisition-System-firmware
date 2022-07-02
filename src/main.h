#ifndef F_CPU
#define F_CPU 16000000
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void switch_adc_line(void);
void return_adc_line(void);
void init_adc(void);