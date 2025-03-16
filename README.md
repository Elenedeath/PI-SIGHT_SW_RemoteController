# PI-SIGHT Remote Controller SW

'ESP32-BLE-PISIGHT' 라이브러리는 ESP32를 블루투스 무선 키보드로 사용할 수 있도록 하며, [ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard) 라이브러리를 PI-SIGHT에 적합하게 일부 수정하여 만들어졌습니다.

'PISIGHT-RC.ino' 코드는 PI-SIGHT 무선 리모컨의 조이스틱과 버튼을 사용해 특정 값을 전송할 수 있도록 합니다.


## 기능

리모컨은 'SIGHTER RC' 라는 이름으로 작동합니다.
기본적으로 리모컨에서는 아래 알파벳 데이터를 전송합니다.
이 알파벳 데이터들은 PI-SIGHT 본체의 키 맵핑 코드를 통해 메뉴 이동, 카메라 작동과 같은 동작을 실행합니다.

 - 조이스틱 위로 짧게 : u
 - 조이스틱 위로 길게 : w
 - 조이스틱 아래로 짧게 : d
 - 조이스틱 아래로 길게 : s
 - 조이스틱 오른쪽 짧게 : r
 - 조이스틱 오른쪽 길게 : z
 - 조이스틱 왼쪽 짧게 : l
 - 조이스틱 왼쪽 길게 : a
 - 조이스틱 누르기 짧게 : e
 - 조이스틱 누르기 길게 : q
 - 검지 당기기 짧게 : c
 - 검지 당기기 길게 : t
 - 엄지 누르기 짧게 : f
 - 엄지 누르기 길게 : g


## 설치

 1. (아두이노 IDE에서 ESP32에 프로그램을 업로드하기 위한 세팅을 완료하세요. [안내 링크](https://github.com/espressif/arduino-esp32#installation-instructions))
 2. ['ESP32-BLE-PISIGHT.zip' 라이브러리 파일](https://github.com/younsj97/PI-SIGHT_SW_RemoteController/blob/main/ESP32_BLE_PISIGHT.zip)을 다운로드 하세요.
 3. 아두이노 IDE 에서 "Sketch" -> "Include Library" -> "Add .ZIP Library..." 클릭 후 다운로드 받은 라이브러리 파일을 선택하세요.
 4. ['PISIGHT-RC.ino' 파일](https://github.com/younsj97/PI-SIGHT_SW_RemoteController/blob/main/PISIGHT-RC/PISIGHT-RC.ino)을 다운로드한 뒤 아두이노 IDE에서 열고, ESP32를 PC에 연결해 소프트웨어를 업로드하세요.


## 기타

 - ESP32를 PC에 연결하기 위해 [ESP-WROOM-32 Downloader](https://www.eleparts.co.kr/goods/view?no=10452097) 장치와 usb 케이블이 필요합니다.


## 커스터마이징

 - 시스템 구성 및 세부 정보는 [ESP32-BLE-Keyboard Github](https://github.com/T-vK/ESP32-BLE-Keyboard)를 확인하세요.

-------------------
English Translate
-------------------

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
