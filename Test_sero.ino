#include <Servo.h>
Servo servo1;
int POT_0;                  // Valeur analogique [0 1024]
int w, P;
void setup() {
 servo1.attach(3);          // PWM 3
 Serial.begin(9600);
}
 
void loop() {
 
POT_0 =analogRead(A1);      // Read A1 [0 1024]
P = analogRead(A1);
POT_0 = POT_0 % 525 + 15;   // [5 to 175]
delay(10);                  // Delay in ms
servo1.write(POT_0/3);      // [5 to 175°]
 
// PRINT VALUES
Serial.println("Degre");
Serial.println(POT_0/3);
Serial.println("Valeur Potar");
Serial.println(P);
//w = map(POT_0,0,128,10,170);
//Serial.println(w);
}
