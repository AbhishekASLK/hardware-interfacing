// Pin configuration
const int pirPin = 2; // PIR sensor output pin
const int buzzerPin = 3; // Buzzer pin

void setup() {
  pinMode(pirPin, INPUT); // Set PIR pin as input
  pinMode(buzzerPin, OUTPUT); // Set buzzer pin as output
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int motionState = digitalRead(pirPin); // Read the PIR sensor output
  
  if (motionState == HIGH) {
    Serial.println("Motion detected!"); // Print message to serial monitor
    tone(buzzerPin, 1000); // Activate buzzer at 1000 Hz
  } else {
    noTone(buzzerPin); // Turn off buzzer if no motion detected
  }
}
