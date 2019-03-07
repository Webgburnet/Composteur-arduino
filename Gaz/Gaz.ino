#include <Wire.h>
#include <MutichannelGasSensor.h>

void setup() 
{
  Serial.begin(115200);
  Serial.println("Début setup");

  gas.begin(0x04);
  gas.powerOn();
  Serial.print("Version du Firmware : ");
  Serial.println(gas.getVersion());
  
  delay(1000);
  
  Serial.println("Fin setup");
}

void loop() {
  float co;
  float no2;
  co = gas.measure_CO();   
  no2 = gas.measure_NO2();

  Serial.print("Concentration de CO : ");
  Serial.print(co);
  Serial.println(" ppm");
  Serial.print("Concentration de NO2 : ");
  Serial.print(no2);
}

