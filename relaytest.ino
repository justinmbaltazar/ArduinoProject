#define relay1 8 //pin
#define relay2 9 //pin
#define relay3 10 //pin
//you can remove the pins as needed
#define interval 1000 //milliseconds delay
void setup() {
  pinMode(relay1, OUTPUT); //setup the relay
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
}
void loop()
{
   digitalWrite(relay1, HIGH); //on
   digitalWrite(relay2, HIGH);
   digitalWrite(relay3, HIGH);
   delay(interval);
   digitalWrite(relay1, LOW); //off
   digitalWrite(relay2, LOW);
   digitalWrite(relay3, LOW);
   delay(interval);
   
}
