#include <LiquidCrystal.h>

const int pinLed = LED_BUILTIN;

// Inicializar o display LCD
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int estado_led = LOW;

unsigned long tempoAnterior = 0;

const long interv = 1000; // tempo do intervalo

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  // lcd.print("Temporizador");
}

void loop() {
  unsigned long temporizador = millis();

  if (temporizador - tempoAnterior >= interv) {
    tempoAnterior = temporizador;

    if (estado_led == LOW) {
      estado_led = HIGH;
    } else {
      estado_led = LOW;
    }
    digitalWrite(pinLed, estado_led);
    
    unsigned long segundos = temporizador / 1000;
    unsigned long minutos = segundos / 60;
    segundos = segundos % 60;

    lcd.setCursor(0, 0);
    lcd.print("Temporizador: ");
    lcd.setCursor(0, 1);

    if (minutos < 10) lcd.print("0");
    lcd.print(minutos);
    lcd.print(":");

    if (segundos < 10) lcd.print("0");
    lcd.print(segundos);
  }
}
