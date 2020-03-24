/*
  5x5 LED Display
  This example shows how to control a five by five LED display
 
  This example code is in the public domain.
*/


/* 
  Digital IO ports Diagram
  
    9  x   x   x   x   x

    8  x   x   x   x   x

    7  x   x   x   x   x

    6  x   x   x   x   x

    5  x   x   x   x   x

       4   3   2   1   0
*/

void setup() {

  // set LED pins to output mode
  for(int i=0; i<=9; i++){pinMode(i, OUTPUT);}
  for(int i=0; i<=9; i++){digitalWrite(i, LOW);}

}

    
void displayLine(int Row, int column0, int column1, int column2, int column3, int column4){
     digitalWrite(Row, HIGH);
     digitalWrite(4, (column0+3)%2); // any number>0 will turn the pin HIGH, this will make an LED off. This is due to no voltage change through the LED
     digitalWrite(3, (column1+3)%2);
     digitalWrite(2, (column2+3)%2);
     digitalWrite(1,(column3+3)%2);
     digitalWrite(0, (column4+3)%2);
     delay(2);
     digitalWrite(Row, LOW);
}

/*create any frame like this, the example below shows a 2
put a 1 where an led should be on and zero where an led should be off

void displayFrame(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 0, 0, 1, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 1, 0, 0, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

*/

/*__________________________________________FRAMES_____________________________________________________*/

void displayZero(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 1, 0, 1, 0);
  displayLine(7, 0, 1, 0, 1, 0);
  displayLine(6, 0, 1, 0, 1, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displayOne(){
  displayLine(9, 0, 0, 1, 0, 0);
  displayLine(8, 0, 1, 1, 0, 0);
  displayLine(7, 0, 0, 1, 0, 0);
  displayLine(6, 0, 0, 1, 0, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displayTwo(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 0, 0, 1, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 1, 0, 0, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displayThree(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 0, 0, 1, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 0, 0, 1, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displayFour(){
  displayLine(9, 0, 1, 0, 1, 0);
  displayLine(8, 0, 1, 0, 1, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 0, 0, 1, 0);
  displayLine(5, 0, 0, 0, 1, 0);
}

void displayFive(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 1, 0, 0, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 0, 0, 1, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displaySix(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 1, 0, 0, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 1, 0, 1, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displaySeven(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 0, 0, 1, 0);
  displayLine(7, 0, 0, 0, 1, 0);
  displayLine(6, 0, 0, 0, 1, 0);
  displayLine(5, 0, 0, 0, 1, 0);
}

void displayEight(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 1, 0, 1, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 1, 0, 1, 0);
  displayLine(5, 0, 1, 1, 1, 0);
}

void displayNine(){
  displayLine(9, 0, 1, 1, 1, 0);
  displayLine(8, 0, 1, 0, 1, 0);
  displayLine(7, 0, 1, 1, 1, 0);
  displayLine(6, 0, 0, 0, 1, 0);
  displayLine(5, 0, 0, 0, 1, 0);
}

/*___________________________________________LOOP________________________________________________________*/

void loop() {
  for(int i=0; i<50; i++){displayZero();}
  for(int i=0; i<50; i++){displayOne();}
  for(int i=0; i<50; i++){displayTwo();}
  for(int i=0; i<50; i++){displayThree();}
  for(int i=0; i<50; i++){displayFour();}
  for(int i=0; i<50; i++){displayFive();}
  for(int i=0; i<50; i++){displaySix();}
  for(int i=0; i<50; i++){displaySeven();}
  for(int i=0; i<50; i++){displayEight();}
  for(int i=0; i<50; i++){displayNine();}
}
