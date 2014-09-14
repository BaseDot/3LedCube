#define pin9 PIND1
#define pin8 PIND2
#define pin7 PINC3
#define pin6 PINC4
#define pin5 PIND0
#define pin4 PINC2
#define pin3 PINC5
#define pin2 PIND3
#define pin1 PINC1
#define l1 PIND6
#define l2 PIND7
#define l3 PINB0

#include "leds.h"
#include <avr/io.h>
#include <util/delay.h>

void initLeds(void){
    DDRC |= 1 << pin1;
    DDRD |= 1 << pin2;
    DDRC |= 1 << pin3;
    DDRC |= 1 << pin4;
    DDRD |= 1 << pin5;
    DDRC |= 1 << pin6;
    DDRC |= 1 << pin7;
    DDRD |= 1 << pin8;
    DDRD |= 1 << pin9;
    DDRD |= 1 << l1;
    DDRD |= 1 << l2;
    DDRB |= 1 << l3;
}

void layer1(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
    PORTD &= ~ 1 << l1;
    _delay_ms(10);
}
void layer2(void){
    PORTD |= 1 << l2;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
    PORTD &= ~ 1 << l2;
    _delay_ms(10);
}
void layer3(void){
    PORTB |= 1 << l3;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
    PORTB &= ~ 1 << l3;
    _delay_ms(10);
}

void col1(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
}
void col2(void){
    PORTD |= 1 << l1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
}
void col3(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
}
void col4(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
}
void col5(void){
    PORTD |= 1 << l1;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
}
void col6(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
}
void col7(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
}
void col8(void){
    PORTD |= 1 << l1;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
}
void col9(void){
    PORTD |= 1 << l1;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD |= 1 << l2;
    _delay_ms(10);
    PORTB |= 1 << l3;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
}

void lineX1(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
    PORTD &= ~ 1 << l1;
}
void lineX2(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
    PORTD &= ~ 1 << l1;
}
void lineX3(void){
    PORTD |= 1 << l1;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
    PORTD &= ~ 1 << l1;
}
void lineX4(void){
    PORTD |= 1 << l2;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
    PORTD &= ~ 1 << l2;
}
void lineX5(void){
    PORTD |= 1 << l2;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
    PORTD &= ~ 1 << l2;
}
void lineX6(void){
    PORTD |= 1 << l2;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
    PORTD &= ~ 1 << l2;
}
void lineX7(void){
    PORTB |= 1 << l3;
    PORTC |= 1 << pin1;
    _delay_ms(10);
    PORTC &= ~ 1 << pin1;
    PORTD |= 1 << pin2;
    _delay_ms(10);
    PORTD &= ~ 1 << pin2;
    PORTC |= 1 << pin3;
    _delay_ms(10);
    PORTC &= ~ 1 << pin3;
    PORTB &= ~ 1 << l3;
}
void lineX8(void){
    PORTB |= 1 << l3;
    PORTC |= 1 << pin4;
    _delay_ms(10);
    PORTC &= ~ 1 << pin4;
    PORTD |= 1 << pin5;
    _delay_ms(10);
    PORTD &= ~ 1 << pin5;
    PORTC |= 1 << pin6;
    _delay_ms(10);
    PORTC &= ~ 1 << pin6;
    PORTB &= ~ 1 << l3;
}
void lineX9(void){
    PORTB |= 1 << l3;
    PORTC |= 1 << pin7;
    _delay_ms(10);
    PORTC &= ~ 1 << pin7;
    PORTD |= 1 << pin8;
    _delay_ms(10);
    PORTD &= ~ 1 << pin8;
    PORTD |= 1 << pin9;
    _delay_ms(10);
    PORTD &= ~ 1 << pin9;
    PORTB &= ~ 1 << l3;
}
