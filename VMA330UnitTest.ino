// Defin output pins
const int outputPin1 = 12; 
const int outputPin2 = 11;  

void setup() {
  Serial.begin(9600);
  pinMode(outputPin1, INPUT); // Sensor 1 as input
  pinMode(outputPin2, INPUT); // Sensor 2 as input
}

void loop() {
  int sensorOutput1 = digitalRead(outputPin1); // Read from Sensor 1
  int sensorOutput2 = digitalRead(outputPin2); // Read from Sensor 2

  if (sensorOutput1 == HIGH) {
    Serial.println("Sensor 1: Nothing detected");
  } else {
    Serial.println("Sensor 1: Something detected");
  }

  if (sensorOutput2 == HIGH) {
    Serial.println("Sensor 2: Nothing detected");
  } else {
    Serial.println("Sensor 2: Something detected");
  }
  delay(3000);
}
