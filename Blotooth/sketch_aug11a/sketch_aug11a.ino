int state;
int led = 8;

void setup() {
  Serial1.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  state=Serial1.read();
  Serial.print(state);
  Serial.print("\n");
  delay(200);
  
  if(state == '1'){
     digitalWrite(led, HIGH); 
        delay(1000);
    }
    else 
  digitalWrite(led, LOW);    
  delay(100);             
  
}
