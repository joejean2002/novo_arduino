#include <LiquidCrystal.h>

const int pinLed = LED_BUILTIN;

// Inicializar o display LCD
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

int estado_led = LOW;

unsigned long tempoAnterior = 0;

const long interv = 10; // tempo do intervalo

void setup() {
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
 // lcd.print("Temporizador");
}

void loop() {
  unsigned long temporizador = millis();
  
  if(temporizador - tempoAnterior >= interv){
    tempoAnterior = temporizador; 
    
    if (estado_led == LOW) {
      estado_led = HIGH;
      } else{
        estado_led = LOW;
        }
        digitalWrite(pinLed, estado_led);
        lcd.setCursor(0, 0);
        lcd.print("Temporizador: ");
        lcd.setCursor(0, 2);
        lcd.print((temporizador / 1000));
  }
}