void setup() {
  // put your setup code here, to run once:
pinMode(15, INPUT);// IR sensor signal pin connected to GPIo15
//This IR sensor is a pull up sensor, so we will print the opposite values
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = !digitalRead(15);
//This IR sensor is a pull up sensor, so we will print the opposite values
Serial.println(x);
delay(10);
}
