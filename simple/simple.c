#include "simple.h"
#include "../setup/setup.h"

void execute(char *command) {
    if (strcmp(command, "exit") == 0) {
        exitS();
    } else if (strcmp(command, "help") == 0) {
        help();
    } else if (strncmp(command, "cd ", 3) == 0) {
        char *dir = command + 3;
        if(chdir(dir) != 0) {
            perror("cd");
        }
    } else if (strcmp(command, "ls") == 0) {
        DIR *d;
        struct dirent *dir;
        d = opendir(".");
        if (d) {
            while ((dir = readdir(d)) != NULL) {
                printf("%s\n", dir->d_name);
            }
            closedir(d);
        }
    } else if (strncmp(command, "mkdir ", 6) == 0) {
        char *dir = command + 6;
        if(mkdir(dir, 0777) != 0) {
            perror("mkdir");
        }
    } else if (strcmp(command, "start") == 0) {
        startExperiment();
    } else {
        printf("Unknown command: %s\n", command);
    }
}

void exitS() {
    printf("Thanks for using\n");
    exit(0);
}

void help() {
    printf("--------------------------------------\n");
    printf("All commands:\n");
    printf("help - show all commands\n");
    printf("cd [directory] - change directory\n");
    printf("ls - list directory contents\n");
    printf("mkdir [directory] - create a directory\n");
    printf("start - start experiment\n"); 
    printf("exit - exit the terminal\n");
    printf("--------------------------------------\n");
}

void init(){
    system("clear");
    printf("Welcome to Pang!\n");
}

char* getInput(){
    char *input = NULL;
    size_t bufferSize = 0;

    getline(&input, &bufferSize, stdin);
    input[strcspn(input, "\n")] = '\0';

    return input;
}
