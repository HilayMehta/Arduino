
void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  Serial1.begin(38400);
}

void loop() {
  while (Serial.available())
  {
    Serial1.write(Serial.read());  // i cannot print on someone else monitor therefore used write
    
  }
  while (Serial1.available())   //getting info
  {
    
    Serial.print((char)Serial1.read());  //printing on my serial monitor therefore using print
  }
  
  

}
