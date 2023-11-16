#ifndef MYSHELL_H
#define MYSHELL_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>

void zara_print(const char *writeup);
void view_my_prompt(void);
void exec_prompt(const char *command);
void read_input(char **command, size_t *size);

#endif /*MYSHELL_H*/
