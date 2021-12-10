/*
  trafficLight.ino - This is a sketch that makes a sequence like a traffic light
  Created by Angel E. Berlanga, 13 1 2019.
  Released into the public domain.
*/
int ports[] = {2,4,6}; // this initialize the ports variables

#include <abLib.h> // this includes the library

void setup(){
    defAllPins('O'); // this defines all pins as OUTPUT
    trafficLight(ports,2); // this call the sequence 2 times

    wait(2); // wait 2 seconds

}
void loop(){
    trafficLight(ports); // this makes call the sequence infinitely
}
