int RL1=13;
int RL2=12;
int RL3=11;
#include<LiquidCrystal.h>
LiquidCrystal lcd(A5,A4,A3,A2,A1,A0);

void setup() {
pinMode(13,OUTPUT); 
pinMode(12,OUTPUT); 
pinMode(11,OUTPUT);
lcd.begin(32,2);
lcd.setCursor(0,0);
lcd.print("HOME AUTOMATION");

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(1,1);
lcd.print("Lamp ON");
digitalWrite(13,1);
digitalWrite(12,0);
digitalWrite(11,0);
delay(5000);

lcd.setCursor(1,1);
lcd.print("Fan ON");
digitalWrite(13,0);
digitalWrite(12,1);
digitalWrite(11,0);
delay(5000);

lcd.setCursor(1,1);
lcd.print("Light ON");
digitalWrite(13,0);
digitalWrite(12,0);
digitalWrite(11,1);
delay(5000);


}

