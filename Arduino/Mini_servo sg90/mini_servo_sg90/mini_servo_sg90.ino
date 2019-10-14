
#include<Servo.h>
int servo_pin=11;
Servo miniservo;
void setup() {
  // put your setup code here, to run once:
  miniservo.attach(servo_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  miniservo.write(0);
  delay(1000);
  miniservo.write(90);
  delay(1000);
  miniservo.write(180);
  delay(1000);
  miniservo.write(90);
  delay(1000);
}
