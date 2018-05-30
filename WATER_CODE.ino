// constants won't change. Used here to set a pin number:

// define pins relays will use 
#define relay1 12
unsigned long previousMillis = 0; 
unsigned long pumppreviousMillis = 0; 
int pump = 0;

// constants won't change:
const long interval = 10000;           // interval turn water on or off
const long water = 30000;


void setup() { //declare pins and sets up relays
   pinMode(relay1, OUTPUT);
   digitalWrite(relay1, HIGH);
}
void loop() {
  
  unsigned long relayMillis = millis();
  if (relayMillis - previousMillis >= interval) {
    // turn on pumps 
    previousMillis = relayMillis;
    digitalWrite(relay1, LOW);
    int pump = 1;
  }  
  if (pump == 1){// keep water on untill time is reached
    unsigned long pumpMillis = millis();
    if (pumpMillis - pumppreviousMillis >= water) {
      pumppreviousMillis = pumpMillis;
      digitalWrite(relay1, HIGH);
      int pump = 0;
      unsigned long pumpMillis = 0;
      }
    }   
  }
