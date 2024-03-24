#include "calc.h"

//do poprawy

// Funkcja do obliczania siły nośnej
double calculateLiftForce(double velocity, double liftCoefficient) {
    double airDensity = 1.225; // kg/m^3 (wartość przyjęta jako przykład) - do zmiany na input
    double wingArea;
    printf("Enter wing area (in m^2): ");
    scanf("%lf", &wingArea);
    return 0.5 * airDensity * velocity * velocity * liftCoefficient * wingArea;
}

// Funkcja do obliczania siły oporu
double calculateDragForce(double velocity, double dragCoefficient) {
    double airDensity = 1.225; // kg/m^3 (wartość przyjęta jako przykład) - do zmiany na input
    double frontalArea;
    printf("Enter frontal area (in m^2): ");
    scanf("%lf", &frontalArea);
    return 0.5 * airDensity * velocity * velocity * dragCoefficient * frontalArea;
}

// Funkcja do obliczania doskonałości aerodynamicznej
double calculateAerodynamicEfficiency(double liftForce, double dragForce) {
    return liftForce / dragForce;
}
