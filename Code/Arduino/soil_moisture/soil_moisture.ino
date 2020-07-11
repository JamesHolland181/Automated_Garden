// Author: James Holland
// Date: 07/06/2020
// Purpose: This program is responsible to monitoring soil moisture via a capacitive sensor. This module is to be incorporated into Automated_Gardening system. 

// Calibrate sensor
// To calibrate, monitor sensor readings when dry. Record this value as 'normal_Air'
// Repeat the above step but for when fully submerged (to max line) in water
const int normal_Air = 583;   // In my testing, the 'normal_Air' value was 583
const int normal_Submerged = 310;  // ... and 310 when submerged
int sensor_reading = 0;
int soil_moisture=0;


void setup() {
  Serial.begin(9600); // Open serial port and declare baud raate to 9600 --> Use serial monitor to observe results
}


void loop() {
  sensor_reading = analogRead(A0);                                                      // Read value from sensor --> in analog pin A0
  Serial.println(sensor_reading);                                                       // Display raw result
  soil_moisture = map(sensor_reading, normal_Air, normal_Submerged, 0, 100);            // Map the sensor reading to a value between 0 and 100 to represent as percentage
  Serial.println(soil_moisture);                                                        // Now, display the percentage

  if(soil_moisture > 100) // If the reading is above 100%, simply display 100%
  {
    Serial.println("100 %");
  }
 
  else if(soil_moisture <0) // Alternatively, if the percentage is below 0%, then simply display 0%
  {
    Serial.println("0 %");
  }
 
  else if(soil_moisture >0 && soil_moisture < 100) // If the soil moisture is valid, display it
  {
    Serial.print(soil_moisture);
    Serial.println("%");
    
  }
  delay(250);
}
