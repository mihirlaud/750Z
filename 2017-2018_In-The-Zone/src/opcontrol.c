/* @file opcontrol.c
 * @brief File for operator control code
 *
 * Any copyright is dedicated to the Public Domain.
 * http://creativecommons.org/publicdomain/zero/1.0/
 *
 * PROS contains FreeRTOS (http://www.freertos.org) whose source code may be
 * obtained from http://sourceforge.net/projects/freertos/files/ or on request.
 */

#include "main.h"
#include "globals.h"

/*
 * SBHS Robotics Team 750Z
 * School Year: 2017-2018
 * Game: In The Zone
 * Authors: Mihir Laud and Allison Li
 */
void operatorControl() {

	int x;
	int y;
	int THRESHOLD = 20;

	// Main loop
	while (true) {

		if(abs(joystickGetAnalog(JOYSTICK, L_AXIS)) >= THRESHOLD) {
			x = -joystickGetAnalog(JOYSTICK, L_AXIS);
		} else {
			x = 0;
		}

		if(abs(joystickGetAnalog(JOYSTICK, R_AXIS)) >= THRESHOLD) {
			y = joystickGetAnalog(JOYSTICK, R_AXIS);
		} else {
			y = 0;
		}

		drive(x, y);
		
		if(joystickGetDigital(JOYSTICK, 6, JOY_UP)) {
			lift(false);
		} else if(joystickGetDigital(JOYSTICK, 6, JOY_DOWN)) {
			lift(true);
		}

		//AUTON TEST
		if(joystickGetDigital(JOYSTICK, 8, JOY_UP)) {
			for(int x = 0; x < 13; x++) {
		    lift(true);
		  }
		  delay(1000);
		  drive(0, 127);
		  delay(1750);
		  drive(0, 0);
		  delay(500);
		  for(int x = 0; x < 20; x++) {
		    lift(false);
		  }
		  delay(500);
		  drive(0, -80);
		  delay(1750);
		  drive(-127, 0);
		  delay(750);
		  drive(0, 0);
		  for(int x = 0; x < 13; x++) {
		    lift(true);
		  }
		  delay(500);
		  drive(0, -127);
		  delay(1000);

		}

		if(abs(joystickGetAnalog(JOYSTICK, 3)) >= THRESHOLD) {
			if(joystickGetAnalog(JOYSTICK, 3)>0)
				swing(false);
			else if(joystickGetAnalog(JOYSTICK, 3)<0)
				swing(true);
		}

		if(joystickGetDigital(JOYSTICK, 5, JOY_UP))
			claw(false);
		else if(joystickGetDigital(JOYSTICK, 5, JOY_DOWN))
			claw(true);
		}

		//if(joystickGetDigital(JOYSTICK, 8, JOY_DOWN)) {
		//	memes();
		//}

	}
}
//big shaq
