#include <LiquidCrystal.h>

const int LED_BLUE = 11;
const int potencio = A0;

// Inicializar o display LCD
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  pinMode(LED_BLUE, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("Controle de Luz");
}

void loop() {
  int valor = analogRead(potencio);
  int brightness = map(valor, 0, 1023, 0, 255);
  analogWrite(LED_BLUE, brightness);
  lcd.setCursor(0, 1);
  lcd.print("Brilho: ");
  lcd.print(brightness);

  delay(500);
}