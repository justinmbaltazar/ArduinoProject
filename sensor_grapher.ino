#include "DHT.h"
#define DHTPIN 7
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

const double k = 5.0/1024;
const double luxFactor = 500000;
const double R2 = 10000;
const double LowLightLimit = 200; 
const double B = 1.3*pow(10.0,7);
const double m = -1.4;
const int LED = 7; 
 
double light_intensity (int RawADC0) {  
    double V2 = k*RawADC0;
    double R1 = (5.0/V2 - 1)*R2;
    double lux = B*pow(R1,m);
    return lux;
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
    delay(2000);
    double intensity = light_intensity(analogRead(0));
    float humi  = dht.readHumidity();
    float tempF = dht.readTemperature(true);
    if (intensity < LowLightLimit) {
        digitalWrite(LED, HIGH);
    } else {
        digitalWrite(LED, LOW);
    }
    Serial.print("Humidity:");
    Serial.print(humi);
    Serial.print(",");
    Serial.print("Temperature(°F):");
    Serial.print(tempF);
    Serial.print(",");
    Serial.print("Light:");
    Serial.println(intensity);
}
