// Water sensor interfacing
void setup() {
  // put your setup code here, to run once:
pinMode(15, INPUT);// Analog data pin of water sensor connected to GPIO 15
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int waterlevel = analogRead(15);
Serial.print("Water levels:");
Serial.println(waterlevel);
delay(50);
}
