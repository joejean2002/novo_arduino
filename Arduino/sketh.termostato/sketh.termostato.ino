int leitura = 0;

void setup() {
  Serial.begin(9600);

}

void loop(){
  leitura = analogRead(A0);
  Serial.print("Leitura do potenciomentro: ");
  Serial.println(leitura);
  delay(500);

}
