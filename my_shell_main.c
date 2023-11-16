#include "myshell.h"
#define MAX_INPUT_SIZE ((size_t)100)

/**
 * main - the entry point
 *
 * Return: 0 on success, non-zero on failure
 */

int main(void)
{
	size_t max_size = MAX_INPUT_SIZE;
		while (1)
		{
			char* command = malloc(MAX_INPUT_SIZE* sizeof (char));

			if (command == NULL)
			{
				zara_print("Memory allocation failed\n");
				return EXIT_FAILURE;
			}

			view_my_prompt();
			read_input(&command, &max_size);
			exec_prompt(command);

			free(command);
		}

		return EXIT_SUCCESS;
	}
