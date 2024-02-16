#include <SPI.h>
#include <MFRC522.h>


#define SS_PIN 10
#define RST_PIN 9

#include  <Servo.h>

Servo myservo;  
int pos = 0;

int RedLed = 7;
int GreenLed = 6;
int buzzer = 5;

byte readCard[4];
String MasterTag = "Fill out your tag number here";
String tagID = "";

MFRC522 mfrc522(SS_PIN, RST_PIN);

void setup()
{
  myservo.attach(8);  
  myservo.write(pos);
  Serial.begin(9600);
  SPI.begin();

  pinMode(RedLed, OUTPUT);
  pinMode(GreenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);

  mfrc522.PCD_Init();
  delay(4);

  mfrc522.PCD_DumpVersionToSerial();

  Serial.println("Waiting for scan...");
}

void loop()
{
  while (getID()) {

    if (tagID == MasterTag)
    {
      Serial.println(" Access Granted!");
      digitalWrite(GreenLed, HIGH);
      Serial.println("--------------------------");
      openGate();
    }

    else{
      Serial.println(" Access Denied!");
      digitalWrite(RedLed, HIGH);
      Serial.println("--------------------------");
      tone(buzzer,1000, 200);
      delay(500);
      tone(buzzer, 1000, 200);
      delay(500);
      tone(buzzer, 1000, 200);
    }
 