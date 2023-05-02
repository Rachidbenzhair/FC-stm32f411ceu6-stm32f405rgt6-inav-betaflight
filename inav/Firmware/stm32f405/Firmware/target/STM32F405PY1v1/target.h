/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "S405"

#define USBD_PRODUCT_STRING  "STMF405"

#define LED0                    PA13

#define BEEPER                  PA14 //PB2
#define BEEPER_INVERTED

#define USE_SPI
// *************** SPI2 OSD ***************************

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN          PB13
#define SPI2_MISO_PIN   	    PC2
#define SPI2_MOSI_PIN   	    PC3

#define USE_MAX7456
#define MAX7456_CS_PIN          PB12
#define MAX7456_SPI_BUS         BUS_SPI2
// *************** Gyro & ACC **********************
#define USE_SPI_DEVICE_1

#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7
#define CS_PIN                  PA4

#define USE_IMU_MPU6000
#define IMU_MPU6000_ALIGN       CW0_DEG_FLIP
#define MPU6000_CS_PIN          CS_PIN
#define MPU6000_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU6500
#define IMU_MPU6500_ALIGN       CW0_DEG_FLIP
#define MPU6500_CS_PIN          CS_PIN
#define MPU6500_SPI_BUS         BUS_SPI1

#define USE_IMU_MPU9250
#define IMU_MPU9250_ALIGN       CW0_DEG_FLIP
#define MPU9250_CS_PIN          CS_PIN
#define MPU9250_SPI_BUS         BUS_SPI1

#define USE_IMU_BMI160
#define IMU_BMI160_ALIGN       CW0_DEG
#define BMI160_CS_PIN          CS_PIN
#define BMI160_SPI_BUS         BUS_SPI1

// *************** SDcard *****************************
#define USE_SDCARD
#define USE_SDCARD_SDIO
#define SDCARD_SDIO_4BIT

#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP
#define VBUS_SENSING_PIN        PA9
#define VBUS_SENSING_ENABLED

// #define AVOID_UART3_FOR_PWM_PPM

#define USE_UART1
#define UART1_RX_PIN            PB7
#define UART1_TX_PIN            PB6

#define USE_UART3
#define UART3_RX_PIN            PB11
#define UART3_TX_PIN            PB10

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#if defined(STM32F405PY1v1_allUART)

#define AVOID_UART2_FOR_PWM_PPM
#define USE_UART2
#define UART2_RX_PIN            PA3
#define UART2_TX_PIN            PA2

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define SERIAL_PORT_COUNT       6

#else
#define SERIAL_PORT_COUNT       4
#endif

#define DEFAULT_RX_TYPE         RX_TYPE_NONE

// *************** I2C /Baro/Mag/Pitot ********************
#define USE_I2C
#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9
// #define I2C_DEVICE_2_SHARES_UART3
#define DEFAULT_I2C_BUS         BUS_I2C1

#define USE_IMU_MPU6050
#define IMU_MPU6050_ALIGN       CW270_DEG
#define MPU6050_I2C_BUS        DEFAULT_I2C_BUS

#define USE_BARO
#define BARO_I2C_BUS            DEFAULT_I2C_BUS
#define USE_BARO_BMP280
#define USE_BARO_MS5611
#define USE_BARO_BMP085
#define USE_BARO_DPS310
#define USE_BARO_SPL06

#define TEMPERATURE_I2C_BUS     DEFAULT_I2C_BUS
#define BNO055_I2C_BUS          DEFAULT_I2C_BUS

#define USE_MAG
#define MAG_I2C_BUS             DEFAULT_I2C_BUS
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL
#define USE_MAG_MPU9250

#define PITOT_I2C_BUS           DEFAULT_I2C_BUS

// *************** PINIO ***************************
#define USE_PINIO
#define USE_PINIOBOX
#define PINIO1_PIN                  PC0
#define PINIO2_PIN                  PC1

// *************** ADC *****************************
#define USE_ADC
#define ADC_CHANNEL_1_PIN               PC5
#define VBAT_ADC_CHANNEL                ADC_CHN_1
#define ADC_CHANNEL_2_PIN               PC4
#define CURRENT_METER_ADC_CHANNEL       ADC_CHN_2
// *************** LED2812 ************************
// #define USE_LED_STRIP
// #define WS2811_PIN                      PA15

// ***************  OTHERS *************************
#define DEFAULT_FEATURES        (FEATURE_BLACKBOX) //FEATURE_VBAT

#define USE_SPEKTRUM_BIND
#define BIND_PIN                PB11 //  RX3

#define USE_DSHOT
#define USE_ESC_SENSOR

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         (BIT(2))

#if !(defined(STM32F405PY1v1_allUART))
#define MAX_PWM_OUTPUT_PORTS       10
#else
#define MAX_PWM_OUTPUT_PORTS       6
#endif
