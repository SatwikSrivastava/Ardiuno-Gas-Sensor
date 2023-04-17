int sensorPin=A0;
int sensorData;
void setup()
{  
  Serial.begin(9600);   
  pinMode(sensorPin,INPUT);                         
 }
void loop()
{
  sensorData = analogRead(sensorPin);       
  Serial.print("Sensor Data:");

  delay(100);                                   
}