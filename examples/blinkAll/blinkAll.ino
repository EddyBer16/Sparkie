/*
  blink.ino - This is a sketch that makes blink a Led
  Created by Angel E. Berlanga, 13 1 2019.
  Released into the public domain.
*/

#include <abLib.h> // this includes the library

void setup(){
    defAllPins('O'); // this defines all pins as OUTPUT
    blinkAll(1,2); // this makes blink all Leds on any port (1-13) 2 times with 1 second of delay

    wait(2); // wait 2 seconds

}
void loop(){
    blinkAll(0.5); // this makes blink all leds on any port (1-13) with 500 milliseconds of delay
}