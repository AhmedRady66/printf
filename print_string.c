#include "main.h"

/**
 * print_string - print string if input string
 * @str: input
 * @count: input
 */
void print_string(const char *str, int *count)
{
	while (*str)
	{
		write(1, str++, 1);
		(*count)++;
	}
}
