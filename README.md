# Sparkie &middot; [![GitHub license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/EddyBer16/sparkie/blob/main/LICENSE) ![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg)

<p align="center">
  <span>English</span> |
  <span>Español (soon)</span>
</p>

Sparkie is an Arduino library based on the *Write less, do more* principle.

* **Maintainable**: Using short function names and efficient code base, Sparkie makes it painless to build IoT applications on Arduino platform with code simpler to understand, and easier to debug. 
* **Minimal**: The complete redesign of the library allows you to create cleaner and shorter code, while maintaining the values of creating more with less effort.
* **Enjoyable**: As the name says, Sparkie can be that ideal friend with whom you can share new experiences in the world of IoT development, as well as simplify your practices with arduino.

Without much effort and using Sparkie you can create this type of code instantly.

## Getting Started

### Installation

Visit [official Arduino guide](https://www.arduino.cc/en/guide/libraries) for detailed library installation process
1. Download the library as .zip
2. Unzip the library folder
3. **On Windows** copy and paste the folder at `C:\Program Files (x86)\Arduino\libraries`

### First example

```C++
#include <Sparkie.h>
    
void setup() {
    Led led(2);
}
    
void loop() {
    led.on();
    wait(2);
    led.off();
    wait(2);
} 
```

As a first example of use of the library we have the classic led blinking.

#### Line-by-line explanation
Firstly, we import the library header file
```C++
#include <Sparkie.h>
```

Then inside the `setup` function, using the `Led` class, we define the led by passing the port number as an argument.
```C++
void setup() {
    Led led(2);
}
```

Inside the loop function, we use the `on` method to turn on the previously defined led using the `Led` class. Alternating the LED on and off to create the illusion of flicker.

With the wait function we define a wait of 2 seconds. The wait function is similar to the delay function, but while the delay function uses milliseconds as parameter, the wait function uses seconds, making the experience of using waits in the code more familiar.
```C++
void loop() {
    led.on();
    wait(2);
    led.off();
    wait(2);
} 
```

# License
Sparkie is [MIT Licensed](https://github.com/EddyBer16/sparkie/blob/master/LICENSE)
