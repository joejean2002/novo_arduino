void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 5; i++){
    //LED 12
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    delay(250);

    //LED 13
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    delay(250);
  }

  for (int i = 5; i > 0; i --){
    //LED 12
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    delay(250);

    //LED 13
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(250);
  }
}
