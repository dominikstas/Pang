#include "simple/simple.h"

int main() {
    char *command;
    init();
    while(1){
        printf("\nWhat you want to do?\n");
        printf(">");
        command = getInput();

        if(strlen(command) != 0){
            execute(command);
            free(command);
        }
    }
    return 0;
}