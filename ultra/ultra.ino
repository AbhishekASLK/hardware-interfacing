// Define the pins for ultrasonic sensor
const int trigPin = 7;
const int echoPin = 6;

// Variables for duration and distance
long duration;
int distance;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Define pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigPin on for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echoPin
  duration = pulseIn(echoPin, HIGH);
  
  // Calculate distance
  distance= duration*0.034/2;
  
  // Print distance to Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  // Wait before taking another reading
  delay(500);
}
