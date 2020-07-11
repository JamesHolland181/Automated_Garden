//// Author: James Holland
//// Date: 07/06/2020
//// Purpose: This program is responsible for monitoring sun exposure using a photodiode. This module is to be incorporated into Automated_Gardening system. 
//
//int raw_sensor = 0;
//
//void setup() {
//  Serial.begin(9600);
//}
//
//void loop() {
//  // Read the analog pin (A0) that the photodiode is attached to
//  raw_sensor = analogRead(A0);
//
//  // Output to serial monitor
//  Serial.println(raw_sensor);
//
//  // Pump the brakes
//  delay(100);
//}

int sensorPin = A0;
int sensorValue = 0;

void setup(void) {
   Serial.begin(9600);
   pinMode(sensorPin, INPUT); 
}
 
void loop(void) {
   sensorValue = analogRead(sensorPin);
   Serial.println(sensorValue);
}
