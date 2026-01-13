#include <vex.h>
#include "robot_config.h"
#include "Preauto.h"

using namespace vex;

void InertialZero(){
    Inertial1.resetHeading();
    Inertial1.resetRotation();
    Inertial1.calibrate();
    Inertial1.setRotation(0,degrees);
    Inertial1.setRotation(0, degrees);
}

void RotationZero(){
    RotationH.resetPosition();
    RotationV.resetPosition();
    RotationH.setPosition(0, degrees);
    RotationH.setPosition(0, degrees);
}

void GPSZero(){
    GPS1.resetHeading();
    GPS1.resetRotation();
    GPS1.calibrate();
    GPS1.setHeading(0, degrees);
    GPS1.setRotation(0, degrees);
}

void SensorZero(){
InertialZero();
RotationZero();
GPSZero();
}