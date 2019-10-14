int triggerpin=9;
int echopin=10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(triggerpin,OUTPUT);
pinMode(echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
float duration,distance;
digitalWrite(triggerpin,LOW);
delayMicroseconds(2);
digitalWrite(triggerpin,HIGH);
delayMicroseconds(10);
digitalWrite(triggerpin,LOW);
duration=pulseIn(echopin,HIGH);
distance=duration*0.034/2;
Serial.println(distance);
}
