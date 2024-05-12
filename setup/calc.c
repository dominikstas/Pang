#include "calc.h"

//do poprawy  -- wing area
// Function to calculate lift force

double calculateLiftForce() {
    double airDensity; 
    printf("Enter air density (in kg/m^3): ");
    scanf("%lf", &airDensity);

    double velocity;
    printf("Enter velocity: ");
    scanf("%lf", &velocity);

    double wingArea;
    printf("Enter wingArea: ");
    scanf("%lf", &wingArea);

    double liftCoefficient;
    printf("Enter lift coefficient: ");
    scanf("%lf", &liftCoefficient);

    return 0.5 * airDensity * velocity * velocity * wingArea * liftCoefficient;
}

// Function to calculate drag force
double calculateDragForce() {
    double airDensity;
    printf("Enter air density (in kg/m^3): ");
    scanf("%lf", &airDensity);

    double velocity;
    printf("Enter velocity: ");
    scanf("%lf", &velocity);

    double wingArea;
    printf("Enter wingArea: ");
    scanf("%lf", &wingArea);

    double dragCoefficient;
    printf("Enter drag coefficient: ");
    scanf("%lf", &dragCoefficient);

    return 0.5 * airDensity * velocity * velocity * wingArea * dragCoefficient;
}

// Function to calculate aerodynamic efficiency
double calculateAerodynamicEfficiency() {
    double liftForce;
    printf("Enter lift force: ");
    scanf("%lf", &liftForce);

    double dragForce;
    printf("Enter drag force: ");
    scanf("%lf", &dragForce);
    
    return liftForce / dragForce;
}
