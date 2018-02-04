#include "main.h"
#include "globals.h"

void drive(int x, int y) {
  motorSet(D_MOTOR_1, y-x);
  motorSet(D_MOTOR_2, -(y+x));
  motorSet(D_MOTOR_3, -(y+x));
  motorSet(D_MOTOR_4, y-x);
}

/*void turn(int rotation){
  motorSet(D_MOTOR_1, rotation);
  motorSet(D_MOTOR_2, -rotation);
  motorSet(D_MOTOR_3, -rotation);
  motorSet(D_MOTOR_4, rotation);
}*/

void lift(bool extend) {
  if(extend == true) {
    motorSet(L_MOTOR_1, -127);
    motorSet(L_MOTOR_2, 127);
  } else if(extend == false) {
    motorSet(L_MOTOR_1, 127);
    motorSet(L_MOTOR_2, -127);
  }
  delay(20);
  motorStop(L_MOTOR_1);
  motorStop(L_MOTOR_2);
}

void memes() {
  speakerPlayRtttl("memes: d=4, o=5, b=160: c, 8p, 8g#, 16g, 16g#, 16g, 16g#, 8g, 8g#, d#, c, 8p, 8c, 8d#, 8g, g#, d#, g#, a#, 8g, 8g#, 8g, 8g#, 8g, 8p, c, c, 8p, 8g#, 16g, 16g#, 16g, 16g#, 8g, 8g#, d#, c, 8p, 8c, 8d#, 8g, g#, d#, g#, a#, 8g, 8g#, 8g, 8g#, 8g");
}
