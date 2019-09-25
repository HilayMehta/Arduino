ledpin=13;
brightness=0;
fadeamount=5;
void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite("ledpin",brightness);
brightness=brightness+fadeamount;
if(brightness<=0||brightness>=255)
{
  fadeamount=-fadeamount;
}
}
