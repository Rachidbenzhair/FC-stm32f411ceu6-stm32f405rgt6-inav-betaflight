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

 #include <stdint.h>
 #include "platform.h"
 #include "fc/fc_msp_box.h"
 #include "fc/config.h"
 #include "io/piniobox.h"

 #include "config/feature.h"
 #include "drivers/pwm_output.h"
 #include "drivers/pwm_mapping.h"
 #include "blackbox/blackbox.h"
 #include "fc/config.h"
 #include "fc/controlrate_profile.h"
 #include "fc/rc_controls.h"
 #include "fc/rc_modes.h"
 #include "io/serial.h"
 #include "rx/rx.h"
 #include "sensors/sensors.h"
 #include "sensors/gyro.h"
 #include "sensors/acceleration.h"
 #include "sensors/barometer.h"
 #include "sensors/compass.h"
 #include "sensors/boardalignment.h"
 #include "flight/pid.h"
 #include "flight/mixer.h"
 #include "flight/servos.h"
 #include "flight/imu.h"
 #include "flight/failsafe.h"
 #include "navigation/navigation.h"

 void targetConfiguration(void)
 {
      gyroConfigMutable()->looptime = 1500;
      systemConfigMutable()->i2c_speed = I2C_SPEED_800KHZ;
     rxConfigMutable()->rx_min_usec = 970;
     pinioBoxConfigMutable()->permanentId[0] = BOX_PERMANENT_ID_USER1;
     pinioBoxConfigMutable()->permanentId[1] = BOX_PERMANENT_ID_USER2;
     // pinioBoxConfigMutable()->permanentId[2] = BOX_PERMANENT_ID_NONE;
 }
