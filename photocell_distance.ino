const int ledPin = 11;
const int photocell = 2;
const int trigPin = 12;
const int echoPin = 13;
int photocellVal = 0;
int duration = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(photocell, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration, distance;
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  photocellVal = analogRead(photocell);
  Serial.print("photocell:");
  Serial.println(photocellVal);
Serial.print("distance:");
Serial.println(distance);
  delay(1000);

  if(photocell <= 150  && distance < 10){
    digitalWrite(ledPin, HIGH);
    }
  if(photocell > 150){
      digitalWrite(ledPin, LOW);
      }
   if(distance >= 10){
    digitalWrite(ledPin, LOW);
   }
   delay(500);
        }
      
