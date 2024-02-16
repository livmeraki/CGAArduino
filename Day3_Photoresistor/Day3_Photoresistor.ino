const int pRes = A1;
const int led1 = 12;
const int led2 = 9;
const int led3 = 6;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  pinMode(pRes, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, );
  pinMode(led3, );
}

void loop() {
  int value;
  Value = analogRead(pRes);
  Serial.println(value);
 
  if(value<){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  else if(value<){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  else if(value<){
    digitalWite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrit(led3, LOW);
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitlWrite(led3, LOW);
  }

  delay(100);

}
