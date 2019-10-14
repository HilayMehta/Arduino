#include<Servo.h>
int servo_pin=11;
Servo miniservo;
int angle=0;
void setup() {
  // put your setup code here, to run once:
  miniservo.attach(servo_pin);
  miniservo.write(angle);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(angle=0;angle<=180;angle++)
  {
    miniservo.write(angle);
    delay(10);
  }
    for(angle=180;angle>=0;angle--)
  {
    miniservo.write(angle);
    delay(10);
  }


}
