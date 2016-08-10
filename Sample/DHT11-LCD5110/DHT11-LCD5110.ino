int incomingByte = 0;   // for incoming serial data
String str;
#include "Nokia_5110.h"
#include <dht11.h>

dht11 DHT11;

#define DHT11PIN 7

#define RST 2
#define CE 3
#define DC 4
#define DIN 5
#define CLK 6

Nokia_5110 lcd = Nokia_5110(RST, CE, DC, DIN, CLK);

void setup()
{
  lcd.setContrast(60);
  lcd.println("DHT11 TEST PROGRAM ");
  lcd.print("LIBRARY VERSION: ");
  lcd.println(DHT11LIB_VERSION);
  lcd.println();
  
}

void loop()
{
  lcd.clear();

  int chk = DHT11.read(DHT11PIN);
  
  lcd.print("Hum: ");
  lcd.print(DHT11.humidity);
  lcd.println(" %");
  
  lcd.println(" ");

  lcd.print("Temp: ");
  lcd.print(DHT11.temperature);
  lcd.println(" C");
  
  delay(2000);
}
