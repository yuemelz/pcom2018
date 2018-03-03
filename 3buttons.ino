int led1 = 9;
int led2 = 8;
int buttonPin1 = 11;
int buttonState1 = 0;
int buttonPin2 = 12;
int buttonState2 = 0;
int buttonPin3 = 13;
int buttonState3 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  
  if(buttonState1 == HIGH && buttonState2 == HIGH){
    digitalWrite(led1, HIGH);
    }else{
      digitalWrite(led1, LOW);
      }

  if(buttonState2 == HIGH && buttonState3 == HIGH){
    digitalWrite(led2, HIGH);
    }else{
      digitalWrite(led2, LOW);
      }
}
