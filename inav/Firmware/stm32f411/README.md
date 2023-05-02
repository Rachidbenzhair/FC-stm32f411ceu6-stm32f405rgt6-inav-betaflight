Прошивка, target [Firmware](./Firmware)  
Схема в [схемы F411](./схемы%20F411)  

stm32f411ceu6 и mpu6050:  
Протокол dshot сильно нагружает проц.  
Если не выбирать keep current settings, то в cli ввести:
```
set looptime = 1500
set dshot_beeper_enabled = off
```
