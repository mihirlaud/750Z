#define D_MOTOR_1 2 //Assigns drive motors to ports 2 - 5
#define D_MOTOR_2 3
#define D_MOTOR_3 4
#define D_MOTOR_4 1

#define L_MOTOR_1 6 //Assigns lift motors to ports 6 and 7
#define L_MOTOR_2 7

#define C_MOTOR_1 8 //Assigns claw arm motors to ports
#define C_MOTOR_2 5

#define CLAW_MOTOR 10 //Assigns claw motor to

#define JOYSTICK 1 //Defines other constants
#define L_AXIS 1
#define R_AXIS 2

void drive(int x, int y);
//void turn(int rotation);
void lift(bool extend);
void swing(bool forward);
void claw(bool close);
void memes();
