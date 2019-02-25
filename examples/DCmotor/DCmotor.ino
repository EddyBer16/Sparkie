#include <abLib.h>

DC motor(3);
int pot = A0;
int giro;

void setup(){}

void loop(){
    giro = analogRead(pot) / 4;
    motor.turn(giro);
}