#include <vex.h>
#include "robot_config.h"

using namespace vex;

brain brain1;

motor RightFront = motor(PORT1, false);
motor RightBack = motor(PORT2, false);
motor_group Rightside = motor_group(RightFront, RightBack);

motor LeftFront = motor(PORT3, false);
motor LeftBack = motor(PORT4, false);
motor_group Leftside = motor_group(LeftFront, LeftBack);

inertial Inertial1 = inertial(PORT8);

smartdrive Drivetrain1 = smartdrive(Leftside, Rightside, Inertial1, 259.34, 320, 40, mm, 1);

controller controller1 = controller();

motor Intake = motor(PORT5, false);
motor Conveyer = motor(PORT6, false);
motor Outtake = motor(PORT7, false);

rotation RotationH = rotation(PORT9, false);
rotation RotationV = rotation(PORT10, false);

digital_out Arm = digital_out(brain1.ThreeWirePort.A);

gps GPS1 = gps(PORT11, 0);

