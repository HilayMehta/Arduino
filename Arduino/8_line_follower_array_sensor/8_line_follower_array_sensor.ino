int irpin[8]={3,4,5,6,7,8,9,10};
int s[100];
int i;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 for(i=0;i<8;i++)
 {
pinMode(irpin[i],INPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<8;i++)
  {
s[i]=digitalRead(irpin[i]);
Serial.print(s[i]);
Serial.print(" ");
 
}
 Serial.println(" "); 
}
