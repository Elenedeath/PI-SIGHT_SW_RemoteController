# PI-SIGHT Remote Controller SW

The 'ESP32-BLE-PISIGHT' library allows you to use ESP32 as a Bluetooth wireless keyboard, and is made by modifying the [ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard) library to suit PI-SIGHT.

The 'PISIGHT-RC.ino' code allows you to send specific values ​​using the joystick and buttons of the PI-SIGHT wireless remote control.


## function

The remote control works under the name 'SIGHTER RC'.
Basically, the remote control transmits the alphabet data below.
These alphabet data execute actions such as menu movement and camera operation through the key mapping code of the PI-SIGHT main body.

 - Short press up on the joystick: u
 - Long press up on the joystick: w
 - Short press down on the joystick :d
 - Long press down on the joystick: s
 - Joystick right short: r
 - Joystick right long : z
 - Joystick left short: l
 - Joystick left long : a
 - Short press the joystick: e
 - Long press the joystick: q
 - Pull the index finger short: c
 - Pull the index finger long: t
 - Short press of thumb: f
 - Long press thumb: g


## installation

 1. (Complete the setup for uploading programs to ESP32 in Arduino IDE. [Instruction link](https://github.com/espressif/arduino-esp32#installation-instructions))
 2. Download the ['ESP32-BLE-PISIGHT.zip' library file](https://github.com/younsj97/PI-SIGHT_SW_RemoteController/blob/main/ESP32_BLE_PISIGHT.zip).
 3. In the Arduino IDE, click "Sketch" -> "Include Library" -> "Add .ZIP Library..." and select the downloaded library file.
 4. Download the ['PISIGHT-RC.ino' file](https://github.com/younsj97/PI-SIGHT_SW_RemoteController/blob/main/PISIGHT-RC/PISIGHT-RC.ino), open it in Arduino IDE, connect the ESP32 to your PC, and upload the software.


## etc

 - You will need the [ESP-WROOM-32 Downloader](https://www.eleparts.co.kr/goods/view?no=10452097) device and a USB cable to connect the ESP32 to your PC.


## Customizing

 - For system configuration and details, please check the [ESP32-BLE-Keyboard Github](https://github.com/T-vK/ESP32-BLE-Keyboard).