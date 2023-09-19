#include "main.h"

/**
 * print_percent - print percentage if recieved
 * @count: input
 */
void print_percent(int *count)
{
	char per = '%';

	write(1, &per, 1);
	(*count)++;
}
