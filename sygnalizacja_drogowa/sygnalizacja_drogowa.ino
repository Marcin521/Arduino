/*
 Początkowo system będzie dopuszczał ruch ze zachód na wschód
*/

  #define westBUTTON 13
  #define eastBUTTON 3
  
  #define westRED 12  //red
  #define westYELOW 11  //yelow
  #define westGREEN 10  //green

  #define eastRED 2 //red
  #define eastYELOW 1  //yelow
  #define eastGREEN 0  //green

  boolean trafficEast = true;
  int trafficTime = 6500;
  int changeDelay = 1000;

void setup() {

   pinMode(westBUTTON, INPUT); //set input
   pinMode(eastBUTTON, INPUT);   

   pinMode(westRED, OUTPUT);
   pinMode(westYELOW, OUTPUT);
   pinMode(westGREEN, OUTPUT);   
   pinMode(eastRED, OUTPUT);
   pinMode(eastYELOW, OUTPUT);
   pinMode(eastGREEN, OUTPUT);

} 

void loop(){

    pinMode(eastRED, HIGH);
    pinMode(westRED, HIGH);
   

  if(digitalRead(eastBUTTON) == HIGH){ //check site of trafic     
            
    pinMode(eastYELOW, HIGH);
    delay(changeDelay);
    pinMode(eastYELOW, LOW);
    delay(changeDelay);
    pinMode(eastGREEN, HIGH);
    delay(changeDelay);
    pinMode(eastGREEN, LOW);    
    
    if(trafficEast != true){    
            
        pinMode(westYELOW, HIGH);
        delay(changeDelay);

        pinMode(westGREEN, HIGH);
        delay(trafficTime);    
    }
    
  }
  


  

}
