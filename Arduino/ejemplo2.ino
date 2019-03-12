
void setup() {
  //Inicializamos LED Verde en estado apagado
  pinMode(26, OUTPUT);
  digitalWrite(26, HIGH);
  //Inicializamos LED Azul en estado apagado
  pinMode(38, OUTPUT);
  digitalWrite(38, HIGH);
  //Inicializamos LED Rojo en estado apagado
  pinMode(25, OUTPUT);
  digitalWrite(25, HIGH);
}

void loop() {
  delay(1000);
  digitalWrite(26, LOW);
  delay(1000);
  digitalWrite(26, HIGH);
  delay(1000);
  digitalWrite(38, LOW);
  delay(1000);
  digitalWrite(38, HIGH);
  delay(1000);
  digitalWrite(25, LOW);
  delay(1000);
  digitalWrite(25, HIGH);
}
