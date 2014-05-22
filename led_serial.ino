/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led[] = {13,12,11,10};

// the setup routine runs once when you press reset:
void setup() {  
  Serial.begin(9600);  
  for(int index=0; index<4; index++)// initialize the digital pin as an output.
  pinMode(led[index], OUTPUT);     
}
int number = 0;
// the loop routine runs over and over again forever:
void loop() 
{
    Serial.print("The number is");
    Serial.println(number);
    delay(2000);
    number++;

  for(int index =0; index<4; index++)//
  {
  digitalWrite(led[index], HIGH);   // turn the LED on (HIGH is the voltage level)
  }             // wait for a second
  delay(1000);  
  
  for(int index =0; index<4; index++)
  {   
  digitalWrite(led[index], LOW);    // turn the LED off by making the voltage LOW
               // wait for a second
 }
  delay(1000);  
 }
