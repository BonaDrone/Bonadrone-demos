uint8_t MOTOR_PINS[4] = {3, 4, 5, 6};
int PWM_MIN = 100;
int PWM_MAX = 500;
void setup() {
  // put your setup code here, to run once:
  for (uint8_t k=0; k<4; ++k) {
      analogWriteFrequency(MOTOR_PINS[k], 2000);
      analogWriteRange(MOTOR_PINS[k], 10000);
      analogWrite(MOTOR_PINS[k], PWM_MIN);
  }
  delay(5000);
}
void loop() {
  // put your main code here, to run repeatedly: 
  analogWrite(4, 0);
}
