/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Charley Moua                                              */
/*    Created:      1/5/2026, 9:27:40 PM                                      */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

#include "vex.h"
#include "robot_config.h"
#include "functions.h"
#include "Preauto.h"
#include "PID.h"

using namespace vex;


competition Competition;



void pre_auton(void) {
SensorZero();

}



void autonomous(void) {

}



void usercontrol(void) {
  while (1) {
    ControllerDrive();
    ControllerButtions();



    wait(20, msec); 
                    
  }
}


int main() {
  
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  
  pre_auton();

  
  while (true) {
    wait(100, msec);
  }
}
