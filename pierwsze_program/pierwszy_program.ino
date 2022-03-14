/*
Szkic Arduino flashing LED
autor: Marcin Kondoł; date 16-05-2021
*/
void setup() {
  // put your setup code here, to run once: 
 
  pinMode(13, OUTPUT); //ustawienie wyjścia
  pinMode(10, OUTPUT); //ustawienie wyjścia

   
  pinMode(1, OUTPUT); //ustawienie wyjścia
  pinMode(0, OUTPUT); //ustawienie wyjścia

}

void loop() {
  // put your main code here, to run repeatedly:
while(1)
{
  digitalWrite(10, HIGH); //Włączenie diody /włącza diode
  digitalWrite(13, HIGH);
  delay(1000); // wstrzymuje działanie na sekundę
  digitalWrite(13, LOW);
  delay(1000); // wstrzymuje działanie na sekundę


  digitalWrite(1, HIGH); //Włączenie diody /włącza diode
  digitalWrite(0, HIGH);
  delay(1000); // wstrzymuje działanie na sekundę
  digitalWrite(0, LOW);
  delay(1000); // wstrzymuje działanie na sekundę
  }

  
}
