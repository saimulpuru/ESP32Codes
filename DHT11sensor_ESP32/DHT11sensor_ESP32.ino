#include <DHT11.h>//adding DHT11 library

DHT11 dht11(15);//creating a DHT11 object on pin 15

void setup() {
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
int temperature = 0;
int humidity = 0;  
temperature = dht11.readTemperature();//built in library function for temperature
humidity = dht11.readHumidity();//built in library function for hunidity
Serial.print("Temperature is: ");
Serial.print(temperature);
Serial.print("Celcius");
Serial.print(","); 
Serial.print("Humidity is: ");
Serial.print(humidity);
Serial.println("%");
delay(1000);  
}
