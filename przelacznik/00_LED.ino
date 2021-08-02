/*
 * maib.c
 *
 *  Created on: 16 lip 2021
 *      Author: Marcin
 */

#include <avr/io.h>
#include <util/delay.h>

//definicje dla procesora
#define LED_PIN (1<<PF0) //A5 inf gdzie podłączam diodę

#define  LED_ON  PORTF &= ~LED_PIN
#define LED_OFF  PORTF |= LED_PIN
#define LED_TOG  PORTF ^= LED_PIN


//definicje dla procesora
#define KEY_PIN (1<<PF7) //A0
#define KEY_DOWN (PINF & KEY_PIN)//spr cyz jest stan niski

//*************************************************************

void setup(){
        Serial.begin(9600); //Ustawienie prędkości transmisji

        DDRF |= LED_PIN; //zm wejście => wyjście
  
        DDRF &= ~KEY_PIN; // port PA0 wejściowy
        PORTF |= KEY_PIN;
 
  }
 
void loop(){

   while(1){

     if(KEY_DOWN){
       _delay_ms(1000);
       LED_TOG;
       Serial.println("1"); //Wysyłanie
     }
       else
     {
      Serial.println("0"); //Wysyłanie
      _delay_ms(1000);      
     }

/***************************************************/

     if(KEY_DOWN){
       _delay_ms(1000);
       LED_TOG;
       Serial.println("1"); //Wysyłanie
     }
       else
     {
      Serial.println("0"); //Wysyłanie
      _delay_ms(1000);      
     }
     
    }
}

//**************************************************************
