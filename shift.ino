/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int datePin =2;
int clockPin =3;
int latchPin=4;

byte date =0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
pinMode(datePin, OUTPUT); 
pinMode(clockPin, OUTPUT);
pinMode(latchPin, OUTPUT);
}

// the loop routine runs over and over again forever:
void shiftWrite(int desirecPin,boolean desiredState)
{
  bitWrite(date,desirecPin,desiredState);   // turn the LED on (HIGH is the voltage level)
 shiftOut(datePin,clockPin,MCBFIRST, date);               // wait for a second
  digitalWrite(latchPin, HIGH);
  digitalWrite(latchPin, LOW);  // turn the LED off by making the voltage LOW
             // wait for a second
}
void loop() {
  for(int i=0; i <=3; i++)
  {
    shiftWrite(i,HIGH);
    delay(100);
  }
  for(int i=0; i <=3; i++)
  {
    shiftWrite(i,LOW);
    delay(100);
  }
}