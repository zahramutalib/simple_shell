#include "myshell.h"

/**
 * exec_prompt - a function for executing command prompt
 * @command:sort of a pointer
 */

void exec_prompt(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (child_pid == 0)
	{
		char *args[2];

		args[0] = (char *)command;
		args[1] = NULL;

		execve(command, args, (char *const *)NULL);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
