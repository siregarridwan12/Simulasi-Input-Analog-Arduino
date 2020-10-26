#include <LiquidCrystal.h>
LiquidCrystal lcd (13, 12, 11, 10, 9, 8);
int sensorPin = A0;
int nilaiADCSensor = 0;
void setup() {
 lcd.begin(20,4);
 lcd.setCursor(0,0);
 lcd.print("Monitoring Suhu");
 lcd.setCursor(0,1);
 lcd.print("Telekomunikasi PNJ");
 delay (1000);
 lcd.clear();
}

void loop() {
  nilaiADCSensor = analogRead(sensorPin);

  double Celcius = ((5.0/1024.0) * analogRead (sensorPin)) * 100;

 lcd.setCursor(0,2);
 lcd.print("SUHU RUANGAN");

 lcd.setCursor(0,3);
 lcd.print(Celcius);

 lcd.setCursor(6,3);
 lcd.print((char)223);

  lcd.setCursor(7,3);
 lcd.print("C");

}
