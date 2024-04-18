// Pin configuration
const int moisturePin = A0; // Soil moisture sensor analog output pin

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int moistureValue = analogRead(moisturePin); // Read soil moisture level

  // Convert analog reading to percentage
  int moisturePercentage = map(moistureValue, 0, 1023, 0, 100);

  Serial.print("Moisture Level: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  delay(1000); // Delay for stability
}
