int outpin1 = 8; //-ve right motor
int outpin2 = 7; //+ve right motor
int outpin3 = 6; //+ve left motor
int outpin4 = 5; //-ve left motor
int enablepin=9;
char n;

void setup() {
  // put your setup code here, to run once:
  pinMode(outpin1, OUTPUT);
  pinMode(outpin2, OUTPUT);
  pinMode(outpin3, OUTPUT);
  pinMode(outpin4, OUTPUT);
  pinMode(enablepin,OUTPUT);
  digitalWrite(enablepin,HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available())
  {
    n = (char)Serial.read();
  
  if (n == 'f')
  {
    digitalWrite(outpin1, LOW);
    digitalWrite(outpin2, HIGH);
    digitalWrite(outpin3, HIGH);
    digitalWrite(outpin4, LOW);
  }
  else if (n == 'b')
  {
    digitalWrite(outpin1, HIGH);
    digitalWrite(outpin2, LOW);
    digitalWrite(outpin3, LOW);
    digitalWrite(outpin4, HIGH);
  }
  else if (n == 'l')
  {
     digitalWrite(outpin1,HIGH );
    digitalWrite(outpin2, HIGH);
    digitalWrite(outpin3, LOW);
    digitalWrite(outpin4, LOW);
  }
  else if (n == 'r')
  {
     digitalWrite(outpin1,LOW );
    digitalWrite(outpin2, LOW);
    digitalWrite(outpin3, HIGH);
    digitalWrite(outpin4, HIGH);
  }

  else if (n == 's')
  {
    digitalWrite(outpin1, LOW);
    digitalWrite(outpin2, LOW);
    digitalWrite(outpin3, LOW);
    digitalWrite(outpin4, LOW);
  }
  }
 
  
}
