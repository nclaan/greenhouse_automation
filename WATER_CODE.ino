// constants won't change. Used here to set a pin number:
const int ledPin =  LED_BUILTIN;// the number of the LED pin

// Variables will change:
#define relay1 12
#define relay2 13
#define relay3 14
unsigned long previousMillis = 0; 
unsigned long pumppreviousMillis = 0; 
int pump = 0;

// constants won't change:
const long interval = 10000;           // interval turn water on or off
const long water = 30000;


void setup() {
   pinMode(relay1, OUTPUT);
   pinMode(relay2, OUTPUT);
   pinMode(relay3, OUTPUT);
   digitalWrite(relay1, HIGH);
   digitalWrite(relay2, HIGH);
   digitalWrite(relay3, HIGH);

}
void loop() {
  
  unsigned long relayMillis = millis();
  

  if (relayMillis - previousMillis >= interval) {
    // turn on pumps 
    previousMillis = relayMillis;
    digitalWrite(relay1, LOW);
    digitalWrite(relay2, LOW);
    digitalWrite(relay3, LOW);
    int pump = 1;
  }
    
  if (pump == 1){// keep water on 
    unsigned long pumpMillis = millis();
    if (pumpMillis - pumppreviousMillis >= water) {
      pumppreviousMillis = pumpMillis;
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      int pump = 0;
      unsigned long pumpMillis = 0;
      }
    }   
  }
