const int triggerPin = 2;
const int echoPin = 15;

void setup() {
  Serial.begin(9600);
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  float duration, dist;
  int distance;
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  dist = (duration / 2) / 29.1;  // Calculate distance in centimeters
  distance = round(dist);
  Serial.print("Distance: ");
  Serial.print(dist);
  Serial.println(" cm");
  delay(100);  // Adjust delay as needed for your application
}