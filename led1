/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:

int led[]={3,4,5};

// the setup routine runs once when you press reset:
void setup() {                
  for (int i=0;i<=3;i++) // initialize the digital pin as an output.
  pinMode(led[i], OUTPUT);  
  
 }

// the loop routine runs over and over again forever:
void loop() {
  for (int i=0;i<=3;i++){
   
    if (i==0){
  digitalWrite(led[i], HIGH);  
  digitalWrite(led[i+1], LOW); 
  digitalWrite(led[i+2], LOW);  // turn the LED on (HIGH is the voltage level)
  delay(1000);}
   else if (i==1) { // wait for a second
  digitalWrite(led[i-1], LOW); 
  digitalWrite(led[i], HIGH);
  digitalWrite(led[i+1], LOW); 
  delay(1000);}
  else if (i==2){
   digitalWrite(led[i-2],LOW); 
  digitalWrite(led[i-1], LOW);
  digitalWrite(led[i], HIGH); 
  delay(1000);}
  else  {
  digitalWrite(led[i-3],HIGH); 
  digitalWrite(led[i-2], HIGH);
  digitalWrite(led[i-1], HIGH); 
  delay(1000);}
  
  }
  

}