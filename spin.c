#include "spin.h"
#include "leds.h"
#include <avr/io.h>
#include <util/delay.h>

void spin(void){
    initLeds();
    col5();
    col1();
    _delay_ms(100);
    col5();
    col2();
    _delay_ms(100);
    col5();
    col3();
    _delay_ms(100);
    col5();
    col6();
    _delay_ms(100);
    col5();
    col9();
    _delay_ms(100);
    col5();
    col8();
    _delay_ms(100);
    col5();
    col7();
    _delay_ms(100);
    col5();
    col4();
}

void spinReverse(void){
    initLeds();
    col5();
    col1();
    _delay_ms(25);
    col5();
    col4();
    _delay_ms(25);
    col5();
    col7();
    _delay_ms(25);
    col5();
    col8();
    _delay_ms(25);
    col5();
    col9();
    _delay_ms(25);
    col5();
    col6();
    _delay_ms(25);
    col5();
    col3();
    _delay_ms(25);
    col5();
    col2();
}
