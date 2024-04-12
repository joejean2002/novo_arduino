const int RED = 9;
const int GREEN = 10;
const int BLUE = 11;

//int leitura = 0;

void setup(){
  Serial.begin(9600);

  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  pinMode(A0, INPUT);
  pinMode(A3, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int valor = analogRead(A0);
  int val = map(valor, 0, 1023, 0, 255);
  int leitura = analogRead(A3);
  int termostato = map(leitura, 0, 1023, 0, 255);

  Serial.print("Valor Recebido: ");
  Serial.println(valor);
  Serial.print("Valor Convertido ");
  Serial.println(val);
  Serial.print("Potenciomentro: ");
  Serial.println(leitura);

  analogWrite(RED, val);
  analogWrite(BLUE, termostato);
  //termostato
  //leitura = analogRead(A3);
  //Serial.print("Potenciomentro: ");
  //Serial.println(leitura);
  delay(500);

  /*digitalWrite(RED, HIGH);
  delay(500);

  digitalWrite(GREEN, HIGH);
  delay(500);

  digitalWrite(BLUE, HIGH);
  delay(500);

  digitalWrite(RED, LOW);
  delay(500);

  digitalWrite(GREEN, LOW);
  delay(500);

  digitalWrite(BLUE, LOW);*/
  delay(500);
}