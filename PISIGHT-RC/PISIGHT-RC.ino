//Define button pins

#define UP_PIN 21 // u | 위 입력 핀 | Up input pin
unsigned long up_press_time = 0; // after 1s = w
bool up_pressed_flag = false;

#define DOWN_PIN 18 // d | 아래 입력 핀 | Down input pin
unsigned long down_press_time = 0; // after 1s = s
bool down_pressed_flag = false;

#define RIGHT_PIN 19 // r | 오른쪽 입력 핀 | Right input pin
unsigned long right_press_time = 0; // after 1s = z
bool right_pressed_flag = false;

#define LEFT_PIN 23 // l | 왼쪽 입력 핀 | Left input pin
unsigned long left_press_time = 0; // after 1s = a
bool left_pressed_flag = false;

#define STICK_PIN 22 // e | 스틱 입력 핀 | Stick input pin
unsigned long stick_press_time = 0; // after 1s = q
bool stick_pressed_flag = false;

#define INDEX_PIN 5 // c | 검지 입력 핀 | Index input pin
unsigned long index_press_time = 0; // after 1s = t
bool index_pressed_flag = false;

#define THUMB_PIN 4 // f | 엄지 입력 핀 | Thumb input pin
unsigned long thumb_press_time = 0; // after 1s = g
bool thumb_pressed_flag = false;

#include <BleKeyboard.h>
BleKeyboard bleKeyboard;

int prev_up_status;
int prev_down_status;
int prev_right_status;
int prev_left_status;
int prev_stick_status;
int prev_index_status;
int prev_thumb_status;

void setup()
{
  Serial.begin(115200);

  bleKeyboard.begin();

  pinMode(UP_PIN, INPUT_PULLUP);
  pinMode(DOWN_PIN, INPUT_PULLUP);
  pinMode(RIGHT_PIN, INPUT_PULLUP);
  pinMode(LEFT_PIN, INPUT_PULLUP);
  pinMode(STICK_PIN, INPUT_PULLUP);
  pinMode(INDEX_PIN, INPUT_PULLUP);
  pinMode(THUMB_PIN, INPUT_PULLUP);

  prev_up_status = digitalRead(UP_PIN);
  prev_down_status = digitalRead(DOWN_PIN);
  prev_right_status = digitalRead(RIGHT_PIN);
  prev_left_status = digitalRead(LEFT_PIN);
  prev_stick_status = digitalRead(STICK_PIN);
  prev_index_status = digitalRead(INDEX_PIN);
  prev_thumb_status = digitalRead(THUMB_PIN);
}

void loop()
{
  while (bleKeyboard.isConnected())
  {
    int up_status = digitalRead(UP_PIN);
    int down_status = digitalRead(DOWN_PIN);
    int right_status = digitalRead(RIGHT_PIN);
    int left_status = digitalRead(LEFT_PIN);
    int stick_status = digitalRead(STICK_PIN);
    int index_status = digitalRead(INDEX_PIN);
    int thumb_status = digitalRead(THUMB_PIN);

    // -------------------------------- UP --------------------------------
    if ((prev_up_status == HIGH) && (up_status == LOW)) // 눌렀을 때 | When pressed
    {
      up_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      up_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_up_status == LOW) && (up_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (up_pressed_flag && (millis() - up_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('w');
        delay(100);
        bleKeyboard.release('w');

        up_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        up_press_time = 0;

        while (digitalRead(UP_PIN) == LOW) // 떨어질 때 까지 대기 | Wait until dropped
        {
          delay(100);
        }
      }
    }

    if ((prev_up_status == LOW) && (up_status == HIGH)) // 뗐을 때 | When released
    {
      if (up_pressed_flag) // 플래그 있을 때 | When flag is present
      {
        bleKeyboard.press('u');
        delay(100);
        bleKeyboard.release('u');

        up_pressed_flag = false; // 플래그 리셋 | Reset flag
      }
    }

    // -------------------------------- DOWN --------------------------------
    if ((prev_down_status == HIGH) && (down_status == LOW)) // 눌렀을 때 | When pressed
    {
      down_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      down_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_down_status == LOW) && (down_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (down_pressed_flag && (millis() - down_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('s');
        delay(100);
        bleKeyboard.release('s');

        down_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        down_press_time = 0;

        while (digitalRead(DOWN_PIN) == LOW) // 떨어질 때 까지 대기 | Wait until released
        {
          delay(100);
        }
      }
    }

    if ((prev_down_status == LOW) && (down_status == HIGH)) // 뗐을 때 | When released
    {
      if (down_pressed_flag) // 플래그 있을 때 | When flag is present
      {
        bleKeyboard.press('d');
        delay(100);
        bleKeyboard.release('d');

        down_pressed_flag = false; // 플래그 리셋 | Reset flag
      }
    }

    // -------------------------------- RIGHT --------------------------------
    if ((prev_right_status == HIGH) && (right_status == LOW)) // 눌렀을 때 | When pressed
    {
      right_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      right_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_right_status == LOW) && (right_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (right_pressed_flag && (millis() - right_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('z');
        delay(100);
        bleKeyboard.release('z');

        right_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        right_press_time = 0;

        while (digitalRead(RIGHT_PIN) == LOW) // 떨어질 때 까지 대기 | Wait until released
        {
          delay(100);
        }
      }
    }

    if ((prev_right_status == LOW) && (right_status == HIGH)) // 뗐을 때 | When released
    {
      if (right_pressed_flag) // 플래그 있을 때 | When flag is present
      {
        bleKeyboard.press('r');
        delay(100);
        bleKeyboard.release('r');

        right_pressed_flag = false; // 플래그 리셋 | Reset flag
      }
    }

        // -------------------------------- LEFT --------------------------------
    if ((prev_left_status == HIGH) && (left_status == LOW)) // 눌렀을 때 | When pressed
    {
      left_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      left_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_left_status == LOW) && (left_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (left_pressed_flag && (millis() - left_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('a');
        delay(100);
        bleKeyboard.release('a');

        left_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        left_press_time = 0;

        while (digitalRead(LEFT_PIN) == LOW) // 떨어질 때 까지 대기 | Wait until released
        {
          delay(100);
        }
      }
    }

    if ((prev_left_status == LOW) && (left_status == HIGH)) // 뗐을 때 | When released
    {
      if (left_pressed_flag) // 플래그 있을 때 | When flag is present
      {
        bleKeyboard.press('l');
        delay(100);
        bleKeyboard.release('l');

        left_pressed_flag = false; // 플래그 리셋 | Reset flag
      }
    }

    // -------------------------------- STICK --------------------------------
    if ((prev_stick_status == HIGH) && (stick_status == LOW)) // 눌렀을 때 | When pressed
    {
      stick_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      stick_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_stick_status == LOW) && (stick_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (stick_pressed_flag && (millis() - stick_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('q');
        delay(100);
        bleKeyboard.release('q');
        
        stick_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        stick_press_time = 0;

        while (digitalRead(STICK_PIN) == LOW) // 떨어질 때 까지 대기 | Wait until released
        {
          delay(100);
        }
      }
    }

    if ((prev_stick_status == LOW) && (stick_status == HIGH)) // 뗐을 때 | When released
    {
      if (stick_pressed_flag) // 플래그 있을 때 | When flag is present
      {
        bleKeyboard.press('e');
        delay(100);
        bleKeyboard.release('e');

        stick_pressed_flag = false; // 플래그 리셋 | Reset flag
      }
    }

        // -------------------------------- INDEX --------------------------------
    if ((prev_index_status == HIGH) && (index_status == LOW)) // 눌렀을 때 | When pressed
    {
      index_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      index_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_index_status == LOW) && (index_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (index_pressed_flag && (millis() - index_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('t');
        delay(100);
        bleKeyboard.release('t');

        index_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        index_press_time = 0;

        while (digitalRead(INDEX_PIN) == LOW) // 떨어질 때 까지 대기 | Wait until released
        {
          delay(100);
        }
      }
    }

    if ((prev_index_status == LOW) && (index_status == HIGH)) // 뗐을 때 | When released
    {
      if (index_pressed_flag) // 플래그 있을 때 | When flag is present
      {
        bleKeyboard.press('c');
        delay(100);
        bleKeyboard.release('c');

        index_pressed_flag = false; // 플래그 리셋 | Reset flag
      }
    }

            // -------------------------------- THUMB --------------------------------
    if ((prev_thumb_status == HIGH) && (thumb_status == LOW)) // 눌렀을 때 | When pressed
    {
      thumb_press_time = millis(); // 눌린 시간 저장 | Save pressed time
      thumb_pressed_flag = true; // 눌린 상태 플래그 설정 | Set pressed state flag
    }

    if ((prev_thumb_status == LOW) && (thumb_status == LOW)) // 계속 누르고 있을 떄 | When pressed continuously
    {
      if (thumb_pressed_flag && (millis() - thumb_press_time >= 1000)) // 1초 이상 누르고 있을 때 | When pressed for more than 1 second
      {
        bleKeyboard.press('g');
        delay(100);
        bleKeyboard.release('g');

        thumb_pressed_flag = false; // 플래그와 시간 리셋 | Reset flag and time
        thumb_press_time = 0;

        while (digitalRead(THUMB_PIN) == LOW) // 떨어질 때 까지 대기 | wait until it drops
        {
          delay(100);
        }
      }
    }

    if ((prev_thumb_status == LOW) && (thumb_status == HIGH)) // 뗐을 때 | when released
    {
      if (thumb_pressed_flag) // 플래그 있을 때 | when there is a flag
      {
        bleKeyboard.press('f');
        delay(100);
        bleKeyboard.release('f');

        thumb_pressed_flag = false; // 플래그 리셋 | reset the flag
      }
    }

    // ------------------------------------------------------------------------------
    prev_up_status = up_status;
    prev_down_status = down_status;
    prev_right_status = right_status;
    prev_left_status = left_status;
    prev_stick_status = stick_status;
    prev_index_status = index_status;
    prev_thumb_status = thumb_status;

    delay(100);
  }
}