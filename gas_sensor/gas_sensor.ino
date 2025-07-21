#include<LiquidCrystal.h>
LiquidCrystal lcd(A5,A4,A3,A2,A1,A0);
int rl=1;
int gl=2;
int speaker=6;
int gas_sensor=7;



void setup() {
  lcd.begin(32,2);
  lcd.setCursor(0,0);
  lcd.print("GAS_DETECTOR");
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,INPUT);

}

void loop() {
 if(digitalRead(gas_sensor)==HIGH){
  lcd.setCursor(0,1);
  lcd.print("    ALERT GAS LEAKAGE  ");
  digitalWrite(1,1);
digitalWrite(2,0);
digitalWrite(6,1);

 } 
else{
  lcd.setCursor(0,1);
  lcd.print("  Normal_Condition ");
  digitalWrite(1,0);
digitalWrite(2,1);
digitalWrite(6,0);
}  

}
