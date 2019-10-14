int pwmpin1 = 4;
int pwmpin2 = 5;
int pwmpin3 = 6;
int pwmpin4 = 7;
int outpin1 = 8;
int outpin2 = 9;
int outpin3 = 10;
int outpin4 = 11;
int n;
void setup() {
  // put your setup code here, to run once:
  pinMode(pwmpin1, OUTPUT);
  pinMode(pwmpin2, OUTPUT);
  pinMode(pwmpin3, OUTPUT);
  pinMode(pwmpin4, OUTPUT);
  pinMode(outpin1, OUTPUT);
  pinMode(outpin2, OUTPUT);
  pinMode(outpin3, OUTPUT);
  pinMode(outpin4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available())
  {
    n = (char)Serial.read();

    if (n == 'f')
   
    {
       analogWrite(pwmpin1,255);
       analogWrite(pwmpin2,255);
      analogWrite(pwmpin3,255);
      analogWrite(pwmpin4,255);
      digitalWrite(outpin1, HIGH);
      digitalWrite(outpin2, HIGH);
      digitalWrite(outpin3, HIGH);
      digitalWrite(outpin4, HIGH);
    }
    else if (n == 'b')
    {
      analogWrite(pwmpin1,50);
      analogWrite(pwmpin2,50);
      analogWrite(pwmpin3,50);
      analogWrite(pwmpin4,50);
      digitalWrite(outpin1, LOW);
      digitalWrite(outpin2, LOW);
      digitalWrite(outpin3,  LOW);
      digitalWrite(outpin4,  LOW);
    }
    else if (n == 'l')
    {
      analogWrite(pwmpin1,50);
      analogWrite(pwmpin2,50);
      analogWrite(pwmpin3,255);
      analogWrite(pwmpin4,255);
      digitalWrite(outpin1, HIGH );
      digitalWrite(outpin2,HIGH);
      digitalWrite(outpin3, HIGH);
      digitalWrite(outpin4, HIGH);
    }
    else if (n == 'r')
    {
     analogWrite(pwmpin1,255);
     analogWrite(pwmpin2,255);
     analogWrite(pwmpin3,50);
     analogWrite(pwmpin4,50);
      digitalWrite(outpin1, HIGH);
      digitalWrite(outpin2, HIGH);
      digitalWrite(outpin3, HIGH);
      digitalWrite(outpin4, HIGH);
    }
    
   }

   
  }
