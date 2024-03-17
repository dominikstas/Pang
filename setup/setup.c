#include "setup.h"

void startExperiment() {
    char experimentName[100];
    printf("Enter experiment name: ");
    scanf("%99s", experimentName);
    getchar(); // Clearing the input buffer

    char choice;
    printf("Do you want to create a text file to save experiment data? (y/n): ");
    scanf(" %c", &choice);
    getchar(); // Clearing the input buffer

    if (choice == 'y' || choice == 'Y') {
        char filename[100];
        printf("Enter filename: ");
        scanf("%99s", filename);
        getchar(); // Clearing the input buffer

        // Check if file exists
        FILE *file = fopen(filename, "r");
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

    // Ask for additional configs (placeholder)
    printf("Do you want to provide additional configs? (Press Enter for default no): ");
    getchar(); // Wait for Enter key
    printf("No additional configs provided.\n");

    // Perform experiment
    // to do
}
