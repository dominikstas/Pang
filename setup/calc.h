#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calculateLiftForce(double velocity, double liftCoefficient);
double calculateDragForce(double velocity, double dragCoefficient);
double calculateAerodynamicEfficiency(double liftForce, double dragForce);

#endif