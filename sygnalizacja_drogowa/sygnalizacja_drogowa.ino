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

void loop() {

  

}
