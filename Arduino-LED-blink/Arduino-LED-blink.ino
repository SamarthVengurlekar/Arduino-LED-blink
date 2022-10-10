#define ledPin 2 

void setup() {
  pinMode(ledPin,OUTPUT);       // initialize digital pin LED_BUILTIN as an output.
 
}

void loop() {
 digitalWrite(ledPin,HIGH);     // turn the LED on (HIGH is the voltage level)
 delay(500);                    // wait for a second
 digitalWrite(ledPin,LOW);      // turn the LED off by making the voltage LOW
 delay(500);                    // wait for a second
}
