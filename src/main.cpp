#include "main.h"
void initialize() {
	chassis.initialize();
    chassis.odom_tracker_back_set(&horiz_tracker);
	lv_example_get_started_3();
}
void disabled() {}
void competition_initialize() {}
void autonomous() {
	if (sel == 1 ) {
		chassis.pid_drive_set(25_in,80);
		chassis.pid_wait();
		chassis.pid_turn_set(90_deg, 50);
		chassis.pid_wait();
		intake.move(120);
		chassis.pid_drive_set(27_in,25);
		intake.move(120);
		chassis.pid_wait();
		chassis.pid_drive_set(7_in,120);
		chassis.pid_wait();
		pros::delay(100);
		pros::delay(400);
		chassis.pid_turn_set(180_deg, 50);
		intake.move(120);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_drive_set(24_in,90);
		intake.move(120);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_turn_set(90_deg,50);
		intake.move(120);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_drive_set(17_in,50);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_turn_set(180_deg,50);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_drive_set(-17_in,80);
		pros::delay(1000);
		intake.move(127);
		intake2.move(127);
	}
	if (sel == 2) {
		chassis.pid_drive_set(27_in,80);
		chassis.pid_wait();
		chassis.pid_turn_set(-90_deg, 50);
		chassis.pid_wait();
		intake.move(120);
		chassis.pid_drive_set(22_in,25);
		intake.move(120);
		chassis.pid_wait();
		chassis.pid_drive_set(7_in,120);
		chassis.pid_wait();
		pros::delay(100);
		pros::delay(400);
		chassis.pid_turn_set(-180_deg, 50);
		intake.move(120);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_drive_set(24_in,90);
		intake.move(120);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_turn_set(-90_deg,50);
		intake.move(120);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_drive_set(18_in,100);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_turn_set(-180_deg,50);
		chassis.pid_wait();
		pros::delay(400);
		chassis.pid_drive_set(-20_in,127);
		pros::delay(1000);
		intake.move(127);
		intake2.move(127);
	}
}
void opcontrol() {
	while (true) {
		chassis.opcontrol_tank();
		if (master.get_digital(DIGITAL_L2)) {
  			intake.move(127);
  			intake2.move(127);
		} else if (master.get_digital(DIGITAL_L1)){
  			intake.move(127);
		} else {
  			intake.move(0);
  			intake2.move(0);
		}
		if (master.get_digital(DIGITAL_DOWN)){
  			intake.move(-127);
  			intake2.move(-127);
		}
		pros::delay(ez::util::DELAY_TIME);  // This is used for timer calculations!  Keep this ez::util::DELAY_TIME
	}
}