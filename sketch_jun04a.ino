const int ledPin =  2; // set constant
// Variables will change:
int ledState = HIGH;             

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        
unsigned long previousMillis2 = 0;  
// constants won't change:
const long interval = 1000;           // interval for staying off (milliseconds)
const long interval2 = 1800000;           // interval for staying on (milliseconds)
int turn_on_or_off_relay=0; // Variable that turns on or off relay

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600); 
}

void loop(){  

  if (turn_on_or_off_relay==0){ //Start the turn on relay loop
   
    unsigned long currentMillis = millis(); // starts counting in millis
    if (currentMillis - previousMillis >= interval) { // Turns relay on even thought its low, and lol resets loop 
      previousMillis = currentMillis;
      digitalWrite(ledPin, LOW); // Turns on pump even though ledPin is low
      int turn_on_or_off_relay=1; // Starts the turn off relay pump loop
      
    }
  }
    
  else ;{//Start the turn off relay loop
    unsigned long currentMillis2 = millis(); // starts counting in millis
    
      if (currentMillis2 - previousMillis2 >= interval2) { // turns off the pump
        previousMillis2 = currentMillis2;
        Serial.print( previousMillis2);
        digitalWrite(ledPin, HIGH); //Turn off the pump even tought ledPin is high
        int turn_on_or_off_relay=0; // starts the turn on pump loop
      
    }
  }
}

