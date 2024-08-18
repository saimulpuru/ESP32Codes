const int bx = 15;
const int by = 2;

void setup() {
  // put your setup code here, to run once:
pinMode(bx, INPUT);
pinMode(by, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = analogRead(bx);
int y = analogRead(by);
Serial.print("x:");
Serial.print(x);
Serial.print("y:");
Serial.println(y);
delay(10);
}
