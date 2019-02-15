/*
  abLib.h - Library for anything that you want to do.
  Created by Angel E. Berlanga, 13 1, 2019.
  Released into the public domain.
*/

#ifndef abLib_h
#define abLib_h

#include "Arduino.h"

class Led
{
  public:
    Led(int pin);
    void on();
    void off();
    void blink(double nd,long rep = 1);
    int getPin();
  private:
    int _pinLed;
};

class Button
{
  public:
    Button(int pin);
    bool isPressed();
    int getPin();
  private:
    int _pinButton;
};

class Display
{
  public:
    Display(int pins[]);
    void clear();
    void show(char simb, double nd = 1);
    void countUp(double nd = 1);
    void countDown(double nd = 1);
  private:
    int * _pinsDisplay;
};

void wait(double nd);

void defPin(int nPin, char param);

void defAllPins(char param);

void allLedsOn();

void allLedsOff();

void blinkAll(double nd, long rep = 1);

void policeSq(int n_repeat, int nLeds, int ports[]);

void loadingSq(int n_repeat, int nLeds, int ports[],int nd);

void trafficLight(int ports[], long rep = 1);

#endif