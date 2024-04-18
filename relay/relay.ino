const int relayPin = 7; // Define the digital pin connected to the relay module
const int analogPin = A0; // Define the analog pin connected to the relay module's input pin

void setup() {
  pinMode(relayPin, OUTPUT); // Set relay pin as an output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Turn on the relay
  digitalWrite(relayPin, HIGH);
  delay(2000); // Wait for 2 seconds

  // Measure voltage across relay module's input pin
  int voltage = analogRead(analogPin);
  float voltageValue = voltage * (5.0 / 1023.0); // Convert ADC reading to voltage (5V range)

  Serial.print("Voltage across relay input pin: ");
  Serial.print(voltageValue);
  Serial.println(" V");

  // Turn off the relay
  digitalWrite(relayPin, LOW);
  delay(2000); // Wait for 2 seconds
}
