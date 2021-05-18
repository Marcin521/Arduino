/*
Szkic Arduino flashing LED
autor: Marcin Kondoł; date 16-05-2021
*/
void setup() {
  // put your setup code here, to run once: 
 
  pinMode(13, OUTPUT); //ustawienie wyjścia
   
}

void loop() {
  // put your main code here, to run repeatedly:

  pinMode(13, HIGH); //włącza diode
  delay(1000); // wstrzymuje działanie na sekundę
  pinMode(13, LOW); //wyłącza diode
  delay(1000); // wstrzymuje działanie na sekundę
  
}
