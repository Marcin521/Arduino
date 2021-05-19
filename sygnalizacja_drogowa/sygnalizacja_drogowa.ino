  #define westBUTTON 13
  #define eastBUTTON 3
  
  #define westRED 12  //red
  #define westYELOW 11  //yelow
  #define westGREEN 10  //green

  #define eastRED 2 //red
  #define eastYELOW 1  //yelow
  #define eastGREEN 0  //green

void setup() {

   pinMode(westBUTTON, INPUT); //set input

   pinMode(eastBUTTON, INPUT);   

   pinMode(westRED, OUTPUT);
   pinMode(eastRED, OUTPUT);
   pinMode(westYELOW, OUTPUT);
   pinMode(eastYELOW, OUTPUT);
   pinMode(westGREEN, OUTPUT);
   pinMode(eastGREEN, OUTPUT);  
  
}

void loop(){

  if(westBUTTON == HIGH){

    pinMode(eastRED, HIGH);
    delay(900);     
   
    pinMode(westRED, HIGH);
    delay(200);     
            
    pinMode(westYELOW, HIGH);
    delay(200);

    pinMode(westGREEN, HIGH);
    delay(500);    
    
  }
  

  if(eastBUTTON == HIGH){

    pinMode(westRED, HIGH);
    delay(900);   
    
    pinMode(eastRED, HIGH);
    delay(100);     
            
    pinMode(eastYELOW, HIGH);
    delay(200);

    pinMode(eastGREEN, HIGH);
    delay(500);    
  } 
  

}
