// Pin configuration
const int pirPin = 2; // PIR sensor output pi
const int ledPin = 13; // LED pin to indicate motion detection

void setup() {
  pinMode(pirPin, INPUT); // Set PIR pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int motionState = digitalRead(pirPin); // Read the PIR sensor output
  
  if (motionState == HIGH) {
    Serial.println("Motion detected!"); // Print message to serial monitor
    digitalWrite(ledPin, HIGH); // Turn on LED
    delay(1000); // Wait for 1 second
  } else {
    digitalWrite(ledPin, LOW); // Turn off LED
  }
}
