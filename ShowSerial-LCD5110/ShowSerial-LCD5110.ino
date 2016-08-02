int incomingByte = 0;   // for incoming serial data
String str;
#include "Nokia_5110.h"

#define RST 2
#define CE 3
#define DC 4
#define DIN 5
#define CLK 6

Nokia_5110 lcd = Nokia_5110(RST, CE, DC, DIN, CLK);

void setup() {
  Serial.begin(115200);     // opens serial port, sets data rate to 9600 bps
  lcd.setContrast(60); // 60 is the default value set by the driver
}

void loop() {

  // send data only when you receive data:
  if (Serial.available() > 0) {
    str = Serial.readStringUntil('\r');
    lcd.clear();
    lcd.println(str);
  }
}
