#include "main.h"

/**
 * print_char - print char in case input is char.
 * @c: input
 * @count: pointer input
 */
void print_char(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}
