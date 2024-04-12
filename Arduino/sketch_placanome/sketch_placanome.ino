#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);

}

void loop() {
  lcd.clear();
  //delay(500);
  lcd.setCursor(5, 0);
  lcd.print("Hello Word! ");
  lcd.setCursor(0, 1);
  lcd.print("JEAN JOE");
  delay(1000);
  
  for(int posicao = 0; posicao < 9; posicao++){
    lcd.scrollDisplayLeft();
    delay(500);
  }
  
  for(int posicao = 0; posicao < 6; posicao++){
    lcd.scrollDisplayRight();
    delay(500);
  }
}