// Author: James Holland
// Date: 07/06/2020
// Purpose: Simple Arduino sketch for monitoring sensor readings, proved particularly useful with soil moisture sensor.

void setup() {
  // Declare baud rate of 115200 --> Watch in 'Serial Plotter'
  Serial.begin(115200);
}

void loop() {
  int value;
  value = analogRead(A0);
  Serial.println(value);
  delay(150);
}
