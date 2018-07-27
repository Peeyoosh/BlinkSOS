void setup() {
  
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int i;
  for(i=0;i<3;i++){
  digitalWrite(LED_BUILTIN, HIGH);   
  delay(500);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);     
  }
  for(i=0;i<3;i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
    digitalWrite(LED_BUILTIN,LOW);
    delay(1000);             
  }
}

