#include <Servo.h>
Servo servoku;

void setup() {
  servoku.attach(2);
}

void loop() {
  int pos;
  for (pos =0; pos <= 180; pos += 1)
  {
    servoku.write(pos);
    delay(15);
  }
  for (pos = 180; pos>= 0; pos -= 1)
  {
    servoku.write(pos);
    delay(15);
  }
}
