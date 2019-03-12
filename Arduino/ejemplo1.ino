void setup() {
  //Abrimos el puerto serial a 115200 bps
  Serial.begin(115200);
  //Esperamos a que el serial esté listo
  while (!Serial);
  //Imprimimos el mensaje 'hola mundo'
  Serial.println("Hola mundo");
}
void loop() {
  static int i=0;
  // Imprime el valor de la letra "i" entre 0 y 10,  sólo durante los 10 primeros ciclos
  while (i <= 10){
    Serial.print("Valor de i: ");
    Serial.println(i);
    i++;
    delay(1000);
  }
}
