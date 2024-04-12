#include <Ultrasonic.h>

const int trigger = 8;
const int echo = 9;

Ultrasonic ultrassom(trigger, echo);

void setup() {
  Serial.begin(9600);
  Serial.print("calibrando o sensor... ");
  delay(2000);

}

void loop() {
  //lcd.clear();
  //delay(500);
  float cm = ultrassom.read();
  Serial.print("Distancia em cm: ");
  Serial.println(cm);
  delay(1000);
}