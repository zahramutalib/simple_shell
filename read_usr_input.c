#include "myshell.h"

/**
 * read_input - A function that will read user inputs
 * @command:morre like a pointer
 * @size:tells me the memory size of an input
 */
void read_input(char *command, size_t size)
{
	if (getline(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			zara_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			zara_print("An error occured while reading input\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
