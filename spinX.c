#include "leds.h"
#include "spinX.h"
#include <avr/io.h>
#include <util/delay.h>

void spinX(void){
    initLeds();
    lineX5();
    lineX1();
    _delay_ms(100);
    lineX5();
    lineX2();
    _delay_ms(100);
    lineX5();
    lineX3();
    _delay_ms(100);
    lineX5();
    lineX6();
    _delay_ms(100);
    lineX5();
    lineX9();
    _delay_ms(100);
    lineX5();
    lineX8();
    _delay_ms(100);
    lineX5();
    lineX7();
    _delay_ms(100);
    lineX5();
    lineX4();
    _delay_ms(100);
}
