#include "calc.h"

//do poprawy  -- wing area
// Function to calculate lift force

double calculateLiftForce(double velocity, double liftCoefficient) {
    double airDensity; 
    printf("Enter air density (in kg/m^3): ");
    scanf("%lf", &airDensity);
    return 0.5 * airDensity * velocity * velocity * liftCoefficient;
}

// Function to calculate drag force
double calculateDragForce(double velocity, double dragCoefficient) {
    double airDensity;
    printf("Enter air density (in kg/m^3): ");
    scanf("%lf", &airDensity);
    return 0.5 * airDensity * velocity * velocity * dragCoefficient;
}

// Function to calculate aerodynamic efficiency
double calculateAerodynamicEfficiency(double liftForce, double dragForce) {
    return liftForce / dragForce;
}
