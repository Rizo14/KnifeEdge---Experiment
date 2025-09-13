/*
   Arduino Uno Code for Knife-Edge Experiment
   ------------------------------------------
   Reads voltage from TIA output on A0
   Sends averaged voltage over Serial at 115200 baud
*/

const int sensorPin = A0;    // Photodiode + TIA connected here
const int nSamples = 5;      // Average 5 readings

void setup() {
  Serial.begin(115200);      // USB Serial communication
}

void loop() {
  long sum = 0;
  for (int i = 0; i < nSamples; i++) {
    sum += analogRead(sensorPin);
    delay(10);               // Small delay between samples
  }
  
  int avgADC = sum / nSamples;

  // Convert ADC (0–1023) to voltage (0–5V)
  float voltage = (avgADC * 5.0) / 1023.0;

  // Send to PC with 4 decimal places
  Serial.println(voltage, 4);

  delay(50); // ~20 Hz effective rate
}
