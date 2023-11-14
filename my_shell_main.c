#include "myshell"

/**
 * main - the entry point
 *
 * Return: 0 on success, non-zero on failure
 */

int main(void)
{
	char command[10]

		while (1)
		{
			view_my_prompt();
			read_input(command, sizeof(command));
			exec_prompt(command);
		}

		return (0);
	}
