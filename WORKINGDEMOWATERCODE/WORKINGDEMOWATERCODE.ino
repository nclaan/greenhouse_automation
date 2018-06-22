#include <SimpleTimer.h>

const int pumpPin = 14; //pin 14 aka d5
// the timer object
SimpleTimer timer;

// a function to be executed periodically
void repeatMe() {// timer loop
    digitalWrite(pumpPin, LOW);//turn pump on 
    delay(10000); // wanter the plants for how long 30 min == 1800000
    digitalWrite(pumpPin, HIGH);//turn pump off
    
}

void setup() {//setup loop run code once 
    pinMode(pumpPin, OUTPUT);//set it as output to allow changing the pins high and low
    timer.setInterval(30000, repeatMe);// interval to run puump every time 43200000
    digitalWrite(pumpPin, LOW); //turn on pump
    delay(20000);// start up test pump cycle 
    digitalWrite(pumpPin, HIGH);// turn  off pump 
    delay(1000); //this is the time till next 6  oclock use millis seconds take around 5 mins to setup so next 6 and 6 ecery 12 hours miunus you current time
}


void loop() {// main loop
    timer.run();//run the timer
    delay(1000);// add to stabilty of the code
   
    
    
    
    
}
