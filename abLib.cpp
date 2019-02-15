/*
  abLib.cpp - Library for anything that you want to do.
  Created by Angel E. Berlanga, 13 1, 2019.
  Released into the public domain.
*/

#include "arduino.h"
#include "abLib.h"

Led::Led(int pin)
{
    pinMode(pin, OUTPUT);
    _pinLed = pin;
}

void Led::on()
{
    digitalWrite(_pinLed,HIGH);
}

void Led::off()
{
    digitalWrite(_pinLed,LOW);
}

void Led::blink(double nd, long rep = 1){
    nd *= 1000;

    for(long i = 0;i < rep;i++){
        digitalWrite(_pinLed,HIGH);
        delay(nd);
        digitalWrite(_pinLed,LOW);
        delay(nd);
    }
}

int Led::getPin(){
    return _pinLed;
}
//////////////////////////////////// 
Button::Button(int pin)
{
    pinMode(pin, INPUT);
    _pinButton = pin;
}

bool Button::isPressed(){
  if(digitalRead(_pinButton) == HIGH){
    return true;
  } else {
    return false;
  }
}

int Button::getPin(){
    return _pinButton;
}
//////////////////////////////////// 
Display::Display(int pins[])
{
   for(int i = 0;i <= 9;i++){
     pinMode(i, OUTPUT);
   } 
   _pinsDisplay = pins;
}

void Display::clear(){
  for(int i = 0;i <= 9;i++){
    digitalWrite(_pinsDisplay[i],LOW);
  }
}

void Display::show(char simb, double nd = 1){
  nd *= 1000;
  if (simb == '0')
  {
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], HIGH);
    digitalWrite(_pinsDisplay[5], HIGH);
    digitalWrite(_pinsDisplay[6], LOW);
  }else if(simb == '1'){
    digitalWrite(_pinsDisplay[0], LOW);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], LOW);
    digitalWrite(_pinsDisplay[4], LOW);
    digitalWrite(_pinsDisplay[5], LOW);
    digitalWrite(_pinsDisplay[6], LOW);
  }else if(simb == '2'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], LOW);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], HIGH);
    digitalWrite(_pinsDisplay[5], LOW);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else if(simb == '3'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], LOW);
    digitalWrite(_pinsDisplay[5], LOW);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else if(simb == '4'){
    digitalWrite(_pinsDisplay[0], LOW);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], LOW);
    digitalWrite(_pinsDisplay[4], LOW);
    digitalWrite(_pinsDisplay[5], HIGH);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else if(simb == '5'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], LOW);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], LOW);
    digitalWrite(_pinsDisplay[5], HIGH);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else if(simb == '6'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], LOW);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], HIGH);
    digitalWrite(_pinsDisplay[5], HIGH);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else if(simb == '7'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], LOW);
    digitalWrite(_pinsDisplay[4], LOW);
    digitalWrite(_pinsDisplay[5], LOW);
    digitalWrite(_pinsDisplay[6], LOW);
  }else if(simb == '8'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], HIGH);
    digitalWrite(_pinsDisplay[5], HIGH);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else if(simb == '9'){
    digitalWrite(_pinsDisplay[0], HIGH);
    digitalWrite(_pinsDisplay[1], HIGH);
    digitalWrite(_pinsDisplay[2], HIGH);
    digitalWrite(_pinsDisplay[3], HIGH);
    digitalWrite(_pinsDisplay[4], LOW);
    digitalWrite(_pinsDisplay[5], HIGH);
    digitalWrite(_pinsDisplay[6], HIGH);
  }else{
    for(int i = 0;i <= 9;i++){
      digitalWrite(_pinsDisplay[i],LOW);
    }
  }
  delay(nd);
  digitalWrite(_pinsDisplay[0],LOW);
  digitalWrite(_pinsDisplay[1],LOW);
  digitalWrite(_pinsDisplay[2],LOW);
  digitalWrite(_pinsDisplay[3],LOW);
  digitalWrite(_pinsDisplay[4],LOW);
  digitalWrite(_pinsDisplay[5],LOW);
  digitalWrite(_pinsDisplay[6],LOW);
  digitalWrite(_pinsDisplay[7],LOW);
}

// void Display::writeDot(double nd = 1){
//   nd *= 1000;
//   digitalWrite(_pinsDisplay[7], HIGH);
//   delay(nd);
//   digitalWrite(_pinsDisplay[7], LOW);
// }

void Display::countUp(double nd = 1){
  nd *= 1000;
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], LOW);
  delay(nd);
  digitalWrite(_pinsDisplay[0], LOW);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], LOW);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], LOW);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], LOW);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], LOW);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], LOW);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], LOW);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
}

void Display::countDown(double nd = 1){
  nd *= 1000;
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], LOW);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], LOW);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], LOW);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], LOW);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], LOW);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], HIGH);
  delay(nd);
  digitalWrite(_pinsDisplay[0], LOW);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], LOW);
  digitalWrite(_pinsDisplay[4], LOW);
  digitalWrite(_pinsDisplay[5], LOW);
  digitalWrite(_pinsDisplay[6], LOW);
  delay(nd);
  digitalWrite(_pinsDisplay[0], HIGH);
  digitalWrite(_pinsDisplay[1], HIGH);
  digitalWrite(_pinsDisplay[2], HIGH);
  digitalWrite(_pinsDisplay[3], HIGH);
  digitalWrite(_pinsDisplay[4], HIGH);
  digitalWrite(_pinsDisplay[5], HIGH);
  digitalWrite(_pinsDisplay[6], LOW);
  delay(nd);
}
/////////////////////////////////// 
void wait(double nd){
    nd *= 1000;
    delay(nd);
}

void defPin(int nPin,char param){
  if(param == 'O'){
    pinMode(nPin,OUTPUT);
  }
  if(param == 'I'){
    pinMode(nPin,INPUT);
  }
}

void defAllPins(char param){
    if(param == 'O'){
        for(byte i = 0;i <= 13;i++){
            pinMode(i,OUTPUT);
        }
    }
    if(param == 'I'){
        for(byte i = 0;i <= 13;i++){
            pinMode(i,INPUT);
        }
    }
}

void allLedsOn(){
    for(byte i = 0;i < 13;i++){
        digitalWrite(i,HIGH);
    }
}

void allLedsOff(){
    for(byte i = 0;i < 13;i++){
        digitalWrite(i,LOW);
    }
}

void blinkAll(double nd, long rep = 1){
    nd *= 1000;

    for(long i = 0;i < rep;i++){
        for(int i = 0;i <= 13;i++){
            digitalWrite(i,HIGH);
        }
        delay(nd);
        for(int i = 0;i <= 13;i++){
            digitalWrite(i,LOW);
        }
        delay(nd);
    }
}

void trafficLight(int ports[], long rep = 1){
    for(long i = 0;i <= rep;i++){
        digitalWrite(ports[0],HIGH);
        delay(30000);
        digitalWrite(ports[0],LOW);
        delay(400);
        digitalWrite(ports[0],HIGH);
        delay(400);
        digitalWrite(ports[0],LOW);
        delay(400);
        digitalWrite(ports[0],HIGH);
        delay(400);
        digitalWrite(ports[0],LOW);
        delay(400);
        digitalWrite(ports[0],HIGH);
        delay(400);
        digitalWrite(ports[0],LOW);
        delay(400);
        digitalWrite(ports[1],HIGH);
        delay(2500);
        digitalWrite(ports[1],LOW);
        digitalWrite(ports[2],HIGH);
        delay(30000);
        digitalWrite(ports[2],LOW);
    }
}

// edit these things below

void policeSq(int n_repeat, int nLeds, int ports[]){
  for(byte i = 0;i < n_repeat;i++){
    if(nLeds == 4){
      for(byte i = 0;i <= 4;i++){
        digitalWrite(ports[0],HIGH);
        digitalWrite(ports[1],HIGH);
        delay(50);
        digitalWrite(ports[0],LOW);
        digitalWrite(ports[1],LOW);
        delay(50);
      }
      for(byte i = 0;i <= 4;i++){
        digitalWrite(ports[2],HIGH);
        digitalWrite(ports[3],HIGH);
        delay(50);
        digitalWrite(ports[2],LOW);
        digitalWrite(ports[3],LOW);
        delay(50);
      }
    }
    if(nLeds == 5){
      for(byte i = 0;i <= 4;i++){
        digitalWrite(ports[0],HIGH);
        digitalWrite(ports[1],HIGH);
        delay(50);
        digitalWrite(ports[0],LOW);
        digitalWrite(ports[1],LOW);
        delay(50);
      }
      for(byte i = 0;i <= 4;i++){
        digitalWrite(ports[3],HIGH);
        digitalWrite(ports[4],HIGH);
        delay(50);
        digitalWrite(ports[3],LOW);
        digitalWrite(ports[4],LOW);
        delay(50);
      }
    }
  }
}

void loadingSq(int n_repeat, int nLeds, int ports[], int nd){
  for(byte i = 0;i < n_repeat;i++){
    if(nLeds == 4){
        for(byte i = 0;i < 4;i++){
            digitalWrite(ports[i],HIGH);
            delay(nd);
        }
    }
    if(nLeds == 5){
        for(byte i = 0;i < 5;i++){
            digitalWrite(ports[i],HIGH);
            delay(nd);
        }
    }
    for(byte i = 0;i <= 13;i++){
        digitalWrite(i,LOW);
    }
  }
}