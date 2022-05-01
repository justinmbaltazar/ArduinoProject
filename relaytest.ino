#define relay1 8
#define relay2 9
#define relay3 10
#define interval 1000
void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
}
void loop()
{
   digitalWrite(relay1, HIGH);
   digitalWrite(relay2, HIGH);
   digitalWrite(relay3, HIGH);
   delay(interval);
   digitalWrite(relay1, LOW);
   digitalWrite(relay2, LOW);
   digitalWrite(relay3, LOW);
   delay(interval);
   
}
