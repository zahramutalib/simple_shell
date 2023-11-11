#include "myshell.h"

/**
 * zara_print - helps me to simply print text
 * @writeup: the message to print
 */

void zara_print(const char *writeup)
{
	write(STDOUT_FILENO, writeup, strlen(writeup));
}
