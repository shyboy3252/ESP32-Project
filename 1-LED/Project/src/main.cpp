#include <Arduino.h>
void setup() 
{
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);//设置GPIO引脚模式
  Serial.begin(115200);//设置串口波特率
}

void loop() {
  digitalWrite(2,HIGH);
  Serial.printf("LED ON\n");
  delay(500);
  digitalWrite(2,LOW);
  Serial.printf("LED OFF\n");
  delay(500);
  // put your main code here, to run repeatedly:
}