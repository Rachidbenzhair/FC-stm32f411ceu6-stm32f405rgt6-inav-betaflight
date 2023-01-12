Прошивка, target в [5.1 PPM MPU6xx0,mpu9250,bmi160](./5.1%20PPM%20MPU6xx0%2Cmpu9250%2Cbmi160)  
Схема в [схемы F411](./схемы%20F411)  

stm32f411ceu6 и mpu6050:  
Протокол dshot сильно нагружает проц.  
Если не выбирать keep current settings, то в cli ввести:
```
set looptime = 1500
set dshot_beeper_enabled = off
```
