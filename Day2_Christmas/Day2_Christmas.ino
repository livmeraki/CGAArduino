int led_Red = 6;  
int led_Green = 8;
int led_Yellow = 2;

void setup() {
 pinMode(led_Red, OUTPUT);
 pinMode(led_Green, OUTPUT);
 pinMode(led_Yellow, OUTPUT);
}

void loop(){
 digitalWrite(led_Red,HIGH); 
 digitalWrite(led_Green,HIGH); 
 digitalWrite(led_Yellow,HIGH);

  delay(1500);
 digitalWrite(led_Red,LOW); 
 delay(1000);
 digitalWrite(led_Green,LOW);
 digitalWrite(led_Yellow,LOW);
 delay(1000);
}

