#ifndef SIMPLE_H
#define SIMPLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

void execute(char *command);
void exitS();
void help();
void init();
char* getInput();
void startExperiment();

#endif
