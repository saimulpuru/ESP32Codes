void setup() {
  // put your setup code here, to run once:
pinMode(15, INPUT);// KNOCK sensor signal pin connected to GPIo15
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = digitalRead(15);
if(x==1){
  Serial.println("Knock detected");
}
else{
  Serial.println("No knocking")
}
Serial.println(x);
delay(10);
}
