/*
  blink.ino - This is a sketch that makes blink a Led
  Created by Angel E. Berlanga, 13 1 2019.
  Released into the public domain.
*/

#include <abLib.h> // this includes the library

Led led1(13); // this creates an instance of Led on the pin 13

void setup(){
    defAllPins('O'); // this defines all pins as OUTPUT
    led1.blink(1,2); // this makes blink a Led 2 times with 1 second of delay

    wait(2); // wait 2 seconds

}
void loop(){
    led1.blink(0.5); // this makes blink a led with 500 milliseconds of delay
}