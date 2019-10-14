int ledpin=13;
int outpin=10;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(irpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(irpin)==HIGH)
{
  digitalWrite(ledpin,HIGH);
  Serial.println("Obstacle");
}
else
{
  digitalWrite(ledpin,LOW);
  Serial.println("No Obstacle Found");
}
delay(1000);
}
