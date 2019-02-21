#include "TimeLib.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int32_t time,t;
  
  t=micros();
  time=now(); 
  t=micros()-t;
  
  Serial.print(hour(time));
  Serial.print("h  ");
  Serial.print(minute(time));
  Serial.print("min  ");
  Serial.print(second(time));
  Serial.print("s  ");
  Serial.print(nowMicros());
  Serial.print("us  ");
  Serial.print(" ");
  Serial.print(day(time));
  Serial.print("/");
  Serial.print(month(time));
  Serial.print("/");
  Serial.print(year(time)); 
  Serial.println(); 
  
  
  Serial.print("processing time = ");
  Serial.print(t);
  Serial.println(" us");
  Serial.println();
  delay(934);
}

void printDigits(int digits){
  // utility function for digital clock display: prints preceding colon and leading 0
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}
