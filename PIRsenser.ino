/*
*人体红外感应模块
*这个模块经测试是感应变化的
*比如人从旁边经过会输出HIGH
*当人到跟前静止后会输出LOW
*也就是说有红外变化则HIGH
*无红外变化则LOW
*王俊锋泽
*2013-5-3 21:05:56
*/

int pirpin = 2;//接到数字接口2

void setup() {
  Serial.begin(9600);//用串口输出，打开串口监视器即可看到输出
  pinMode(pirpin, INPUT);
}

void loop() {
  int val = digitalRead(pirpin);
  Serial.println(val);
  delay(100);
}
