void setup() {
  // put your setup code here, to run once:
pinMode(15, INPUT);// Tilt sensor signal pin connected to GPIo15
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = digitalRead(15);
//If value is 0 the sensor is vertical, and if 1 the sensor is horizontal
if(x==0){
  Serial.println("Sensor is VERTICAL!");
}
else{
  Serial.println("Sensor is HORIZONTAL");
}

delay(100);
}
