/*
 button program
*/
 #define LED 12
 #define BUTTON 7
 
void setup() {

  //declares elements 
  pinMode(BUTTON, INPUT); //set input
  pinMode(LED, OUTPUT); //set output
  
}

void loop() {

  if(digitalRead(BUTTON) == HIGH){
      
      digitalWrite(LED, HIGH); 
      delay(1000);             
      digitalWrite(LED, LOW);  
  }
  
}
