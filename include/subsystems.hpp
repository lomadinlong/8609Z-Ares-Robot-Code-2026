#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::MotorGroup intakebottom({-10,9});
inline pros::Motor intakebottom2(-8);
inline pros::Motor intakemiddle(7);
inline pros::Motor intaketop(6);
inline pros::Motor intaketop2(11);
inline ez::Piston wingPiston('D');
inline ez::Piston alignerPiston('E');
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');