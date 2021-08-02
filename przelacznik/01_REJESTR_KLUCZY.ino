#include <avr/io.h>
#include <util/delay.h>

void setup() {
//definicje
    Serial.begin(9600); //Ustawienie prędkości transmisji

    pinMode(13, INPUT_PULLUP);
    pinMode(12, INPUT_PULLUP);
    pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop() {
  if(digitalRead(13) == LOW) { //Jeśli przycisk jest wciś
     Serial.println("A1: 0"); //Wysyłanie
     _delay_ms(1000);      
  }
  else{
     Serial.println("A1: 1"); //Wysyłanie
     _delay_ms(1000);      
  }

/***********************************************************************/

  if(digitalRead(12) == LOW) { //Jeśli przycisk jest wciś
     Serial.println("A2: 0"); //Wysyłanie
     _delay_ms(1000);      
  }
  else{
     Serial.println("A2: 1"); //Wysyłanie
     _delay_ms(1000);      
  }

Serial.println("====="); //Wysyłanie
}
