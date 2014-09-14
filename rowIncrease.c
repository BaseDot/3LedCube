#include "rowIncrease.h"
#include "leds.h"
#include <avr/io.h>
#include <util/delay.h>

void layerUpDown(void){
    initLeds();
    layer1();
    _delay_ms(400);
    layer2();
    _delay_ms(400);
    layer3();
    _delay_ms(400);
}
