#include <avr/io.h>
#include <util/delay.h>
#include "rowIncrease.h"
#include "spin.h"
#include "door.h"
#include "spinX.h"

int main(void){
    while(1){
        for(int i = 0; i < 7; i++){
            spinX();
        }
        for(int i = 0; i < 6; i++){
            layerUpDown();
        }
        for(int i = 0; i < 5; i++){
            spin();
        }
        for(int i = 0; i < 7; i++){
            spinReverse();
        }
        for(int i = 0; i < 6; i++){
            door();
        }
    }
}
