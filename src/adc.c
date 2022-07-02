#include "main.h"

void switch_adc_line(void)
{
    if ((ADMUX & 0x0F) == 0x0F)
        ADMUX &= 0xF0;
    else
        ADMUX += 1;
}

void return_adc_line(void) {
    return (ADMUX & 0x0F);
}

void init_adc(void)
{
    /* AVCC as reference voltage (5V). */
    ADMUX |= (1 << REFS0);

    /* 10-bit mode with pre-scalar at 128 (125KHz). ISRs enabled. */
    ADCSRA  |= (1 << ADPS0)|(1 << ADPS1)|(1 << ADPS2)|(1 << ADEN)|(1 << ADIE)|(1 << ADSC);
}