
int irpin[8]={3,4,5,6,7,8,9,10};
int line[8]={10,20,30,40,50,60,70,80};
int s[100];
int i;
int count=0,sum=0;
int average;
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
  }
   count=0;
   sum=0;
   average=0;
  for(i=0;i<8;i++)
    {
     
if(s[i]==0)  //black line
{
 count=count+1;
  sum=sum+line[i];
}
}
if(count==0)
{
  Serial.println("White Line");
  sum=0;
  count=1;
}
average=sum/count; 
Serial.println(average);
delay(1000);
  }
  
  
 
