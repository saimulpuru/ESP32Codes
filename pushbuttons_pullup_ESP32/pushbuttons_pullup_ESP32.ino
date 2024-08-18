void setup() {
  // put your setup code here, to run once:
pinMode(32,INPUT_PULLUP);
pinMode(33,INPUT_PULLUP);
pinMode(34,INPUT_PULLUP);
pinMode(35,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x1 = digitalRead(32);
int x2 = digitalRead(33);
int x3 = digitalRead(34);
int x4 = digitalRead(35);
//Serial.println(x1);
//Serial.println(x2);
//Serial.println(x3);
Serial.println(x4);
delay(10);
}
