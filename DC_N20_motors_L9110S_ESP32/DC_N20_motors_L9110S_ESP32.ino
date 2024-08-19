const int lm1 = 25;
const int lm2 = 26;
const int rm1 = 32;
const int rm2 = 33;

void setup() {
  // put your setup code here, to run once:
pinMode(lm1, OUTPUT);
pinMode(lm2, OUTPUT);
pinMode(rm1, OUTPUT);
pinMode(rm2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//FRONT
digitalWrite(lm1, HIGH);
digitalWrite(lm2, LOW);
digitalWrite(rm1, LOW);
digitalWrite(rm2, HIGH);

delay(1000);

//BACK
digitalWrite(lm1, LOW);
digitalWrite(lm2, HIGH);
digitalWrite(rm1, HIGH);
digitalWrite(rm2, LOW);

delay(1000);

//RIGHT
digitalWrite(lm1, LOW);
digitalWrite(lm2, HIGH);
digitalWrite(rm1, LOW);
digitalWrite(rm2, HIGH);

delay(1000);

//LEFT
digitalWrite(lm1, HIGH);
digitalWrite(lm2, LOW);
digitalWrite(rm1, HIGH);
digitalWrite(rm2, LOW);

delay(1000);

//STOP
digitalWrite(lm1, LOW);
digitalWrite(lm2, LOW);
digitalWrite(rm1, LOW);
digitalWrite(rm2, LOW);

delay(1000);
}
