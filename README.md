# abLib  
# Write Less, Do More.
This is an arduino library writted, debugged and supported by ___Angel Berlanga___.  
## How to install  
1. Download the .ZIP file from the library.  
2. Unzip the library folder  
3. Copy the library folder
4. Go to **C:\Program Files (x86)\Arduino\libraries** and paste the library folder  
## Reference
- **`defAllPins('O' or 'I')`**:  
With this function you can define all the ports as `OUTPUT` (something very practical to work with LED sequences) or `INPUT`.  
**For example**:  
~~~
    #include <abLib.h> // this includes the library

    void setup(){
        defAllPins('O'); // this defines all pins as OUTPUT
        blinkAll(1,2); // this makes blink all Leds on any port (1-13) 2 times with 1 second of delay

        delay(2000); // wait 2 seconds

    }
    void loop(){
        blinkAll(0.5); // this makes blink all leds on any port (1-13) with 500 milliseconds of delay
    }
~~~
- **`defPin(n_pin, 'O' or 'I')`**:  
this function allows you to define a pin passing as parameter the led pin and **`'O'`** for **`OUTPUT`** and **`'I'`** for **`INPUT`**.  
**For example**:  
~~~
  #include <myLibrary.h>

  void setup(){
      defPin(13,'O');
  }
  void loop(){
      // ...
  }
~~~  
- **`wait(n)`**:  
This function allows you add a delay, but using seconds instead of milliseconds.  
- **`Led` (Class)**:  
This class allows you to create an instance with the methods **`on`, `off`, `getPin` and `blink`**  
**For example**:  
~~~
    #include <abLib.h> // this includes the library

    Led led1(13); // this creates an instance of Led on the pin 13

    void setup(){
        
    }
    void loop(){
        led1.getPin(); // this gets the pin of led1
        led1.on(); // this makes on a led
        wait(1); // wait a second
        led1.off(); // this makes off a led
        wait(1); // wait a second
        led1.blink(1); // this makes blink a led with 1 second of delay
    }
~~~   
- **`Button` (Class)**:  
This class allows you to create an instance with the methods **`isPressed` and `getPin`**  
**For example**:  
~~~
    #include <abLib.h>

    Led led(2); // this creates a led with on pin 2
    Button button(3); // this creates a button on pin 3

    void setup(){} // this function is empty

    void loop(){
        if(button.isPressed()){ // this check if the button is pressed
            led.on(); // this on the led
        } else {
            led.off(); // this off the led
        }
    }
~~~   
- **`Display` (Class)**:  
This class allows you to create an instance with the methods **`show`, `countUp` and `countDown`**  
**For example**:  
~~~
    #include <abLib.h> // this includes the library

    int pins[] = {2,3,4,5,6,7,8,9}; // this creates an array with the display ports
    Display display(pins); // this creates an instance of the Display class with the ports above

    void setup(){} // we are not going to use this
    void loop(){
        display.countUp(1); // this shows a count up at the display
        display.countDown(1); // this shows a count down at the display
    }
~~~   
- **`allLedsOn()`**:  
This function allows you to turn on all leds. This function turn on in all pins (0-13).    
- **`allLedsOff()`**:  
This function turn off all leds. This function turn off in all pins (0-13).  
- **Sequences**:  
    1. **`trafficLight(pins array, repetitions)`**:  
    This function makes a traffic light sequence passing as parametres an array with 3 pins and the repetitions number (optional)