void setup() {
 // initialize digital pin 13 as an output.
 Serial.begin(9600);
 pinMode(7, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 randomSeed( analogRead(A0));
}
void loop(){
String letter = "";
int x = random(1,7);
/*if(x==1)
{
  letter = "a";
}
if(x==2)
{
  letter = "b";
}
if(x==3)
{
  letter = "c";
}
if(x==4)
{
  letter = "d";
}
if(x==5)
{
  letter = "e";
}
if(x==6)
{
  letter = "f";
}*/
/*while(Serial.available()==0)
{
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
}*/
if(Serial.available()>0){
String letter = ""; // create empty String
char inp = Serial.read(); //read the character from serial port
letter.concat(inp); //put the character into the empty string

if (letter.equalsIgnoreCase("a")||letter.equalsIgnoreCase("1")) //check which letter was read from the Serial port
{
 digitalWrite(7, HIGH);   // lift specific pins representing the letter
 digitalWrite(2, LOW);   
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 delay(1000);              
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
  delay(1000);  
// Port = new Serial("/dev/tty.usbmodemFD131",
}
if (letter.equalsIgnoreCase("b")||letter.equalsIgnoreCase("2")) //check which letter was read from the Serial port
{
digitalWrite(7, HIGH);   //lift specific pins representing the letter
 digitalWrite(2, HIGH);   
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);
 delay(1000);              
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("c")||letter.equalsIgnoreCase("3")) //check which letter was read from the Serial port
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
  delay(1000);  
}
if (letter.equalsIgnoreCase("d")||letter.equalsIgnoreCase("4"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("e")||letter.equalsIgnoreCase("5"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
  delay(1000);  
}
if (letter.equalsIgnoreCase("f")||letter.equalsIgnoreCase("6"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("g")||letter.equalsIgnoreCase("7"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("h")||letter.equalsIgnoreCase("8"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("i")||letter.equalsIgnoreCase("9"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("j")||letter.equalsIgnoreCase("0"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}if (letter.equalsIgnoreCase("k"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("l"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("m"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("n"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("o"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("p"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("q"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("r"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("s"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("t"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("u"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("v"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("w"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("x"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("y"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("z"))
{
 digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("!"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("?"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("'"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase(","))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, LOW);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("_"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(5, LOW);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("."))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, LOW);
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
   delay(1000);  
}
if (letter.equalsIgnoreCase("#"))
{
 digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(3, HIGH);
 digitalWrite(4, HIGH);
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);// turn the LED on (HIGH is the voltage level)
 delay(1000);              // wait for a second
 digitalWrite(7, LOW);
 digitalWrite(2, LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
 delay(1000);
}
}
}
//}

