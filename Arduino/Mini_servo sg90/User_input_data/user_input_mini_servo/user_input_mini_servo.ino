#include<Servo.h>
int servo_pin=11;
Servo miniservo;
int i=0;
int angle;
void setup() {
  // put your setup code here, to run once:
  miniservo.attach(servo_pin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    angle=Serial.parseInt();  
  for(i=0;i<=angle;i++)
  {
    miniservo.write(i);
    delay(10);
  }
    for(i=angle;i>=0;i--)
  {
    miniservo.write(i);
    delay(10);
  }
  }
