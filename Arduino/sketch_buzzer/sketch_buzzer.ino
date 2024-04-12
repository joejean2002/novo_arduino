void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  delay(1000);
  int tempo = 400;
  
  tone(10, 400, tempo);
  delay(tempo);

  tone(10, 294, tempo);
  delay(tempo);

  tone(10, 349, tempo / 2);
  delay(tempo / 2);

  tone(10, 392, tempo / 2);
  delay(tempo / 2);

  tone(10 ,440, tempo);
  delay(tempo);

  tone(10, 294, tempo);
  delay(tempo);

  tone(10, 349, tempo / 2);
  delay(tempo / 2);

  tone(10, 392, tempo / 2);
  delay(tempo / 2);

  tone(10, 330, tempo);
  delay(tempo);
}