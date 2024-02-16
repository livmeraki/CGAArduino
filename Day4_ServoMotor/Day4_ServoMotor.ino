#include  <Servo.h>

Servo myservo;  

int pos = 10;

int echoPin = 8;
int trigPin = 9;

float duration;
float distance;

void setup()
{
  myservo.attach(10);  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  myservo.write(pos);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delay(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance = ((float)(340 * duration) / 10000) / 2;
 
  Serial.print(distance);
  Serial.println("cm");
 
  if (distance < 50 && pos < 170)
  {
    pos+=10;
    myservo.write(pos);
    delay(100)
  }
 
  else if(distance >= 50 && pos>=0)
{
    pos-=10;
    myservo.write(pos);
    delay(100);
  }
 
}