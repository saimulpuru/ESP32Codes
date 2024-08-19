void setup() {
  // put your setup code here, to run once:
pinMode(15,INPUT);// Digital data Pin connected to GPIO15
pinMode(2,INPUT);// Analog data pin connected to GPIO2
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int gas_level = analogRead(2);
int gas_percent= map(gas_level,0,4095,0,100);// mapping gas level to percentage
Serial.print("Gas digital value:");
Serial.print(digitalRead(15));
Serial.print("||Gas levels:");
Serial.println(gas_percent);

delay(1000);
}
