int state;
int led = 8;

void setup() {
  Serial1.begin(9600);
  pinMode(led, OUTPUT);

    pinMode(13, INPUT_PULLUP);
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

    if(digitalRead(13) == LOW) { //Jeśli przycisk jest wciś
     Serial.println("A1: 0"); //Wysyłanie
     _delay_ms(1000);      
  }
  else{
     Serial.println("A1: 1"); //Wysyłanie
     _delay_ms(1000);      
  }

/***********************************************************************/
  
}
