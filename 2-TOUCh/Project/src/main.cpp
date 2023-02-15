#include <Arduino.h>

// 定义外部中断的Mode
// 无中断，读取Touch值
// Touch中断，执行 TouchEvent()
void TouchEvent()
{
    Serial.printf("TOUCH中断执行中....touch:%d\r\n\r\n",touchRead(T0));
}

void setup()
{
    Serial.begin(115200);
    // Pin: T0(GPIO4), 函数指针:TouchEvent, 阈值: 40
    touchAttachInterrupt(T0, TouchEvent, 40);

}

void loop()
{
    Serial.printf("touch:%d\r\n", touchRead(T0));
    delay(200);
}