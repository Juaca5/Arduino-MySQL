int sensorPin = 0;     //The analog pin sensor is connected to

void setup(){
  
  Serial.begin(9600);  // Start the serial connection with computer

}

void loop()            // To run over and over again
{
  
 int sensor = analogRead(sensorPin); // Reading data from the analog pin

 Serial.print(sensor);               // Printing the data
 Serial.print("\n");                 // Starting new line
 
 delay(1000);                        // Waiting for a second

}
