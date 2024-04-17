#include <LiquidCrystal.h>
#include <Ultrasonic.h>

const int trigger = 8;
const int echo = 9;
const int buzzer = 10;
const int DISTANCE = 80;

Ultrasonic ultrassom(trigger, echo);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  float cm = ultrassom.read();
  Serial.print("Distancia em cm: ");
  Serial.println(cm);

  lcd.clear();
  lcd.setCursor(5, 0);
  lcd.print("Distancia: ");
  lcd.setCursor(0, 1);
  lcd.print(cm);

  if (cm < DISTANCE) {
    tone(buzzer, 2000);
  } else {
    noTone(buzzer);
  }

  delay(2000);
}