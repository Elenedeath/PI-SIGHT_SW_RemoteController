# PI-SIGHT Remote Controller SW

'ESP32-BLE-PISIGHT' 라이브러리는 ESP32를 블루투스 무선 키보드로 사용할 수 있도록 하며, [ESP32-BLE-Keyboard](https://github.com/T-vK/ESP32-BLE-Keyboard) 라이브러리를 PI-SIGHT에 적합하게 일부 수정하여 만들어졌습니다.

'PISIGHT-RC.ino' 코드는 PI-SIGHT 무선 리모컨의 조이스틱과 버튼을 사용해 특정 값을 전송할 수 있도록 합니다.


## 기능

리모컨은 'SIGHTER RC' 라는 이름으로 작동합니다.
기본적으로 리모컨에서는 아래 알파벳 데이터를 전송합니다.
이 알파벳 데이터들은 PI-SIGHT 본체의 SW_controller_cam/noncam.py를 통해 메뉴 이동, 카메라 작동과 같은 동작으로 맵핑됩니다.

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
 2. ['ESP32-BLE-PISIGHT.zip' 파일을 다운로드](https://github.com/younsj97/PI-SIGHT_SW_RemoteController/blob/main/ESP32_BLE_PISIGHT.zip) 하세요.
 3. 아두이노 IDE 에서 "Sketch" -> "Include Library" -> "Add .ZIP Library..." 클릭 후 다운로드 받은 파일을 선택하세요.
 4. ['PISIGHT-RC.ino' 파일을 다운로드](https://github.com/younsj97/PI-SIGHT_SW_RemoteController/blob/main/PISIGHT-RC/PISIGHT-RC.ino)하고 아두이노 IDE에서 'PISIGHT-RC.ino' 파일을 열고 ESP32를 PC에 연결해 업로드하세요.


## 기타

 - ESP32를 PC에 연결하기 위해 [ESP-WROOM-32 Downloader](https://www.eleparts.co.kr/goods/view?no=10452097) 장치와 usb 케이블이 필요합니다.
