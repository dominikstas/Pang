#include "calc.h"
#include <stdio.h>

// Function to calculate lift force
double calculateLiftForce() {
    double airDensity; 
    printf("Enter air density (in kg/m^3): ");
    scanf("%lf", &airDensity);

    double velocity;
    printf("Enter velocity (in m/s): ");
    scanf("%lf", &velocity);

    double wingArea;
    printf("Enter wing area (in m^2): ");
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
    printf("Enter velocity (in m/s): ");
    scanf("%lf", &velocity);

    double wingArea;
    printf("Enter wing area (in m^2): ");
    scanf("%lf", &wingArea);

    double dragCoefficient;
    printf("Enter drag coefficient: ");
    scanf("%lf", &dragCoefficient);

    return 0.5 * airDensity * velocity * velocity * wingArea * dragCoefficient;
}

// Function to calculate aerodynamic efficiency
double calculateAerodynamicEfficiency() {
    double liftForce;
    printf("Enter lift force (in N): ");
    scanf("%lf", &liftForce);

    double dragForce;
    printf("Enter drag force (in N): ");
    scanf("%lf", &dragForce);
    
    return liftForce / dragForce;
}

// Function to calculate wing loading
double calculateWingLoading() {
    double weight;
    printf("Enter weight (in N): ");
    scanf("%lf", &weight);

    double wingArea;
    printf("Enter wing area (in m^2): ");
    scanf("%lf", &wingArea);

    return weight / wingArea;
}

// Function to calculate Reynolds number
double calculateReynoldsNumber() {
    double airDensity;
    printf("Enter air density (in kg/m^3): ");
    scanf("%lf", &airDensity);

    double velocity;
    printf("Enter velocity (in m/s): ");
    scanf("%lf", &velocity);

    double characteristicLength;
    printf("Enter characteristic length (in m): ");
    scanf("%lf", &characteristicLength);

    double dynamicViscosity;
    printf("Enter dynamic viscosity (in Pa.s): ");
    scanf("%lf", &dynamicViscosity);

    return (airDensity * velocity * characteristicLength) / dynamicViscosity;
}

// Function to calculate thrust-to-weight ratio
double calculateThrustToWeightRatio() {
    double thrust;
    printf("Enter thrust (in N): ");
    scanf("%lf", &thrust);

    double weight;
    printf("Enter weight (in N): ");
    scanf("%lf", &weight);

    return thrust / weight;
}
