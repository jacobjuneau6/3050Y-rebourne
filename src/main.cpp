#include "main.h"
//#define clear
void initialize() {
	chassis.initialize();
	lv_example_get_started_3();
}
void disabled() {}
void competition_initialize() {}
void autonomous() {
	chassis.pid_drive_set(24_in, 80);
	chassis.pid_wait();
	chassis.pid_turn_set(90_deg, 80);
	chassis.pid_wait();
	chassis.pid_drive_set(24_in, 80);
	chassis.pid_wait();
}
void opcontrol() {
	while (true) {
		chassis.opcontrol_tank();
		pros::delay(ez::util::DELAY_TIME);  // This is used for timer calculations!  Keep this ez::util::DELAY_TIME
	}
}