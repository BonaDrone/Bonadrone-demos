void setup() {
  //Inicializamos el pin del zumbador
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  static int nveces_1 = 0;
  while(nveces_1 <= 5){
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(500);
    nveces_1++;
  }
  static int nveces_2 = 0;
  while(nveces_2 <= 5){
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(250);
    nveces_2++;
  }
  static int nveces_3 = 0;
  while(nveces_3 <= 5){
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(50);
    nveces_3++;
  }
}
