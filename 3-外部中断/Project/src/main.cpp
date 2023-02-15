#include <Arduino.h>
void PinIntEvent()//中断服务函数
{
    Serial.printf("进入中断......\r\n");
    delay(200);
}

void setup()
{
    Serial.begin(115200);//串口初始化
    
    pinMode(2, INPUT_PULLUP);//设置中断引脚模式
    attachInterrupt(2, PinIntEvent, FALLING);//引脚下降沿触发中断服务函数

}

void loop()
{
    Serial.printf("没有进入中断......\n");
}