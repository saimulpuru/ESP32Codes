int const PULSE_SENSOR_PIN = 15;   // 'S' Signal pin connected to A0

int Signal;                // Store incoming ADC data. Value can range from 0-1024
int Threshold = 550;       // Determine which Signal to "count as a beat" and which to ignore.

void setup() {
	pinMode(2,OUTPUT);  // Built-in LED will blink to your heartbeat
	Serial.begin(9600);           // Set comm speed for serial plotter window
}

void loop() {

	Signal = analogRead(PULSE_SENSOR_PIN); // Read the sensor value

	Serial.println(Signal);                // Send the signal value to serial plotter

	if(Signal > Threshold){                // If the signal is above threshold, turn on the LED
		digitalWrite(2,HIGH);
	} else {
		digitalWrite(2,LOW);     // Else turn off the LED
	}
	delay(10);
}