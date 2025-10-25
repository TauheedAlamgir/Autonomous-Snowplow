const int SENSOR_LEFT = A6; 
const int SENSOR_RIGHT = A7; 
const int LINE_THRESHOLD = 90; 


int leftSensorValue = 0;
int rightSensorValue = 0;


void readLineSensors() {
    
    leftSensorValue = analogRead(SENSOR_LEFT);
    rightSensorValue = analogRead(SENSOR_RIGHT);

    
    Serial.print("Left Sensor: ");
    Serial.print((leftSensorValue < LINE_THRESHOLD) ? "White = " : "Black = ");
    Serial.println(leftSensorValue);

    Serial.print("Right Sensor: ");
    Serial.print((rightSensorValue < LINE_THRESHOLD) ? "White = " : "Black = ");
    Serial.println(rightSensorValue);
}


void processLineDetection() {
    if (leftSensorValue > LINE_THRESHOLD) {
        Serial.println("Line detected by Left Sensor.");
    }

    if (rightSensorValue > LINE_THRESHOLD) {
        Serial.println("Line detected by Right Sensor.");
    }
}

void setup() {
    Serial.begin(9600); 
    Serial.println("Line Follower Sensor Test Initialized.");
}

void loop() {
    readLineSensors(); 
    processLineDetection(); 
    delay(1000); 
}

