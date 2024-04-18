int sensorPin = A0; // Analog pin connected to the sound sensor
int ledPin = 13; // LED on Arduino board

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the sound level
  Serial.println(sensorValue); // Print sound level to the serial monitor
  delay(1000);
  if (sensorValue > 100) { // Threshold value, adjust as needed
    digitalWrite(ledPin, HIGH); // Turn on LED if noise is above threshold
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED if noise is below threshold
  }
  delay(100); // Delay for stability
}
