//Reading Analog Data
const int voltageSensor = A0;
float vOUT = 0.0;
float vIN = 0.0;
float R1 = 30000.0;
float R2 = 7500.0;
int value = 0;

void setup()
{
Serial.begin(9600);
}
void loop()
{  
  value = analogRead(voltageSensor);
  vOUT = (value * 5.0) / 1024.0;
  vIN = vOUT / (R2/(R1+R2));
  Serial.println(vIN);
  delay(2000);  
}