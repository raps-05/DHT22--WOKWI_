// #include <DHT.h>
// DHT dht(8,DHT22)

// float humidity; 
// float temperature;
// void setup() {
//   // put your setup code here, to run once:
//   Serial.begin(9600);
//   dht.begin();

// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   humidity=dht.readHumidity();
//   temperature= dht.readTemperature();

//   Serial.print("Humidity is ");
//   Serial.println(humidity);

//   Serial.print("temperature is ");
//   Serial.println(temperature);

//   Serial.println("Celsius");
//   delay(2000);
// }

#include <DHT.h>

#define DHTPIN 8     
#define DHTTYPE DHT22  

DHT dht(DHTPIN, DHTTYPE); 
float humidity; 
float temperature;

void setup() {
 
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  Serial.print("Humidity is ");
  Serial.print(humidity);
  

  Serial.print(" % Temperature is ");
  Serial.print(temperature);
  Serial.println("Celcius");

  delay(2000);
}

