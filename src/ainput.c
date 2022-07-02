#include "main.h"

ISR(ADC_vect)
{
    switch_adc_line();

    /* Start conversion again. */
    ADCSRA |= (1 << ADSC);
}