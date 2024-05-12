#include "setup.h"
#include "calc.h"

void startExperiment() {
    char experimentName[100];
    printf("Enter experiment name: ");
    scanf("%99s", experimentName);
    getchar(); // Clearing the input buffer

    char choice;
    printf("Do you want to create a text file to save experiment data? (y/n): ");
    scanf(" %c", &choice);
    getchar(); // Clearing the input buffer

    FILE *file = NULL;

    if (choice == 'y' || choice == 'Y') {
        char filename[100];
        printf("Enter filename: ");
        scanf("%99s", filename);
        getchar(); // Clearing the input buffer

        // Check if file exists
        file = fopen(filename, "r");
        if (file != NULL) {
            fclose(file);
            printf("Error: File '%s' already exists.\n", filename);
            return;
        }

        // Create file
        file = fopen(filename, "w");
        if (file == NULL) {
            printf("Error: Unable to create file '%s'.\n", filename);
            return;
        }
        fclose(file);
        printf("File '%s' created successfully.\n", filename);
    }

    // Menu
    printf("Choose calculation:\n");
    printf("1. Calculate lift force\n");
    printf("2. Calculate drag force\n");
    printf("3. Calculate aerodynamic efficiency\n");
    printf("Enter your choice (1/2/3): ");
    int calculationChoice;
    scanf("%d", &calculationChoice);
    getchar(); // Clearing the input buffer

    double result;
    switch (calculationChoice) {
        case 1:
            // Obliczenie siły nośnej
            result = calculateLiftForce();
            printf("Lift force: %.2lf\n", result);
            break;
        case 2:
            // Obliczenie siły oporu
            result = calculateDragForce();
            printf("Drag force: %.2lf\n", result);
            break;
        case 3:
            // Obliczenie doskonałości aerodynamicznej
            result = calculateAerodynamicEfficiency();
            printf("Aerodynamic efficiency: %.2lf\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    // Save to file if choosen
    if (file != NULL) {
        fprintf(file, "Experiment Name: %s\n", experimentName);
        fprintf(file, "Calculation Choice: %d\n", calculationChoice);
        fprintf(file, "Result: %.2lf\n", result);
        fclose(file);
        printf("Data saved to file.\n");
    }
}