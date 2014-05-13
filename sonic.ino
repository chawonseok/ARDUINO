int trigPin = 12;
int echoPin = 11;
int ledPin = 8;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
    pinMode(ledPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance >= 200 || distance <= 0){
    digitalWrite(ledPin, 0);
    Serial.println("Out of range");
  }
  else if (distance <= 10 || distance >= 0){
    digitalWrite(ledPin, 1);
    Serial.print(distance);
    Serial.println("cm");    
  }
  else{
    digitalWrite(ledPin, 0);
    Serial.print(distance);
    Serial.println("cm");
  }
  delay(100);
}
