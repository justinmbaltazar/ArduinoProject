int led_pin1 = 13;
int led_pin2 = 12;
int sensor_pin = 8;

void setup()
{
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(sensor_pin, INPUT);
}

void loop() 
{
  if(digitalRead(sensor_pin) == HIGH)
    {
      digitalWrite(led_pin1, HIGH);
      digitalWrite(led_pin2, LOW);
      delay(2000);
    }
  else
    {
      digitalWrite(led_pin1, LOW);
      digitalWrite(led_pin2, HIGH);
      delay(2000);
    }
}
