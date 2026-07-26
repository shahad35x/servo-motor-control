// C++ code
//
#include <Servo.h>

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;

void setup()
{
  servo_1.attach(5, 500, 2500);
  servo_2.attach(10, 500, 2500);
  servo_3.attach(6, 500, 2500);
  servo_4.attach(3, 500, 2500);
  pinMode(LED_BUILTIN, OUTPUT);
  
  
  // Sweep for approximately 2 seconds
  for (int i = 0; i < 2; i++) {
    for (int pos = 0; pos <= 180; pos++) {
      servo_1.write(pos);
      servo_2.write(pos);
      servo_3.write(pos);
      servo_4.write(pos);
      delay(5);
    }
     for (int pos = 180; pos >= 0; pos--) {
      servo_1.write(pos);
      servo_2.write(pos);
      servo_3.write(pos);
      servo_4.write(pos);
      delay(5);
    }
  }

  // After sweeping, hold all motors at 90 degrees
  servo_1.write(90);
  servo_2.write(90);
  servo_3.write(90);
  servo_4.write(90);
}

void loop()
{
  // motors stay locked at 90 degrees
}
