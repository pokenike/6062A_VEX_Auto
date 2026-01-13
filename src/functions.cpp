#include <vex.h>
#include "functions.h"
#include "robot_config.h"

using namespace vex;




void ControllerDrive(){
int LR = controller1.Axis1.position();
int FB = controller1.Axis2.position();

Rightside.spin(forward, LR, percent);
Leftside.spin(reverse, LR, percent);

Rightside.spin(forward, FB, percent);
Leftside.spin(forward, FB, percent);

}

void Fast(){
Intake.setVelocity(100, percent);
Conveyer.setVelocity(100, percent);
Outtake.setVelocity(100, percent);
}

//For Long and Middle high Goal
void HMGScoring(){
Intake.spin(forward);
Conveyer.spin(forward);
Outtake.spin(forward);
Fast();
}

void Storage(){
Intake.spin(forward);
Conveyer.spin(forward);
Outtake.spin(reverse);
Fast();
}

// Low Middle Goal
void LGScoring(){
Intake.spin(reverse);
Conveyer.spin(reverse);
Outtake.spin(reverse);
Fast();
}

void Stop(){
Intake.stop();
Conveyer.stop();
Outtake.stop();
}

void ArmExtend(){
Arm.set(true);
}

void ArmRetract(){
Arm.set(false);    
}

void ControllerButtions(){
controller1.ButtonA.pressed(Storage);
controller1.ButtonB.pressed(HMGScoring);
controller1.ButtonY.pressed(LGScoring);
controller1.ButtonX.pressed(Stop);
controller1.ButtonR1.pressed(ArmExtend);
controller1.ButtonR2.pressed(ArmRetract);
}
