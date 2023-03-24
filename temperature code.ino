// C++ code
//
#include <Servo.h>

int Motor = 0;

int i = 0;

int j = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
}

void loop()
{
  Motor = 0;
  for (Motor = 1; Motor <= 90; Motor += 1) {
    servo_9.write(Motor);
    delay(30); // Wait for 30 millisecond(s)
  }
  for (j = 90; j <= 0; j += 30) {
    servo_9.write(Motor);
  }
}
