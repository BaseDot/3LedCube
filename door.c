#include "door.h"
#include "leds.h"
#include <avr/io.h>
#include <util/delay.h>

void door(void){
    initLeds();
    col1();
    col4();
    col7();
    _delay_ms(200);
    col1();
    col5();
    col9();
    _delay_ms(200);
    col1();
    col2();
    col3();
    _delay_ms(200);
}
