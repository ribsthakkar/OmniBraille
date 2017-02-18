///Mux_Shield_DigitalOut_Example
///http://mayhewlabs.com/arduino-mux-shield

/*
This example shows how to output high or low on all 48 pins.  To use the analog pins as digital, we use
pin numbers 14-16 (instead of analog numbers 0-2). 

To simplify this code further, one might use nested for loops or function calls.
*/

//Give convenient names to the control pins
#define CONTROL0 5    //MUX control pin 0 (S3 is connected to Arduino pin 2)
#define CONTROL1 4
#define CONTROL2 3
#define CONTROL3 2

void setup()
{
  //Set MUX control pins to output
  pinMode(CONTROL0, OUTPUT);
  pinMode(CONTROL1, OUTPUT);
  pinMode(CONTROL2, OUTPUT);
  pinMode(CONTROL3, OUTPUT);
  //Turn on output to digital pin 14 (MUX 0) and turn off the other 2 multiplexer data pins
  pinMode(14, OUTPUT);
  pinMode(15, INPUT);
  pinMode(16, INPUT);
  int i = 1;
  int j = 2;
  int k = 3;
  int l = 4;
  int m = 5;
  int n = 6;
}


void loop()
{
  int i = 1;
  int j = 2;
  int k = 3;
  int l = 4;
  int m = 5;
  int n = 6;
    digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);  
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100); 
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);;
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100); 
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100); 
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3

    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100); 
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (n&15)>>3); //S3
    digitalWrite(CONTROL1, (n&7)>>2);  //S2
    digitalWrite(CONTROL2, (n&3)>>1);  //S1
    digitalWrite(CONTROL3, (n&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (n&15)>>3); //S3
    digitalWrite(CONTROL1, (n&7)>>2);  //S2
    digitalWrite(CONTROL2, (n&3)>>1);  //S1
    digitalWrite(CONTROL3, (n&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL0, (j&15)>>3); //S3
    digitalWrite(CONTROL1, (j&7)>>2);  //S2
    digitalWrite(CONTROL2, (j&3)>>1);  //S1
    digitalWrite(CONTROL3, (j&1));     //S0
    digitalWrite(14, HIGH);
    delay(100); 
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (n&15)>>3); //S3
    digitalWrite(CONTROL1, (n&7)>>2);  //S2
    digitalWrite(CONTROL2, (n&3)>>1);  //S1
    digitalWrite(CONTROL3, (n&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (n&15)>>3); //S3
    digitalWrite(CONTROL1, (n&7)>>2);  //S2
    digitalWrite(CONTROL2, (n&3)>>1);  //S1
    digitalWrite(CONTROL3, (n&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (l&15)>>3); //S3
    digitalWrite(CONTROL1, (l&7)>>2);  //S2
    digitalWrite(CONTROL2, (l&3)>>1);  //S1
    digitalWrite(CONTROL3, (l&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (n&15)>>3); //S3
    digitalWrite(CONTROL1, (n&7)>>2);  //S2
    digitalWrite(CONTROL2, (n&3)>>1);  //S1
    digitalWrite(CONTROL3, (n&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
digitalWrite(CONTROL0, (i&15)>>3); //S3
    digitalWrite(CONTROL1, (i&7)>>2);  //S2
    digitalWrite(CONTROL2, (i&3)>>1);  //S1
    digitalWrite(CONTROL3, (i&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (k&15)>>3); //S3
    digitalWrite(CONTROL1, (k&7)>>2);  //S2
    digitalWrite(CONTROL2, (k&3)>>1);  //S1
    digitalWrite(CONTROL3, (k&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);  
    digitalWrite(CONTROL0, (m&15)>>3); //S3
    digitalWrite(CONTROL1, (m&7)>>2);  //S2
    digitalWrite(CONTROL2, (m&3)>>1);  //S1
    digitalWrite(CONTROL3, (m&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(CONTROL0, (n&15)>>3); //S3
    digitalWrite(CONTROL1, (n&7)>>2);  //S2
    digitalWrite(CONTROL2, (n&3)>>1);  //S1
    digitalWrite(CONTROL3, (n&1));     //S0
    digitalWrite(14, HIGH);
    delay(100);
    digitalWrite(14, LOW);
    delay(1000);
  }
  
 
