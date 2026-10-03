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
	}
	if (sel == 2) {
	}
}
void opcontrol() {
	while (true) {
		chassis.opcontrol_tank();
		if (master.get_digital(DIGITAL_L1)) {
  			intake.move(127);
  			intake2.move(127);
		} else if (master.get_digital(DIGITAL_R1)){
  			intake.move(127);
		} else {
  			intake.move(0);
  			intake2.move(0);
		pros::delay(ez::util::DELAY_TIME);  // This is used for timer calculations!  Keep this ez::util::DELAY_TIME
	}
}