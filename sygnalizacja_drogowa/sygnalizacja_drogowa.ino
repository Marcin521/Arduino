  #define westRED 1  //red
  #define eastRED 2 //red

  #define westYELOW 3  //yelow
  #define eastYELOW 4  //yelow

  #define westGREEN 5  //green
  #define eastGREEN 6  //green

  #define westBUTTON 1
  #define eastBUTTON 2

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
