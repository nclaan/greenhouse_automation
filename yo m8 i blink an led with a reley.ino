/*
ESP8266 Blink
Blink the blue LED on the ESP8266 module
*/

#define LED 2 //Define blinking LED pin

void setup() {
  pinMode(2, OUTPUT); // Initialize the LED pin as an output
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, LOW); // Turn the LED on (Note that LOW is the voltage level)
  delay(1000); // Wait for a second
  digitalWrite(2, HIGH); // Turn the LED off by making the voltage HIGH
  delay(1000); // Wait for two seconds
}
