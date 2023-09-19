#include "main.h"

/**
 * print_integer - print integer if integer received
 * @num: input
 * @count: input
 */
void print_integer(int num, int *count)
{
	char buffer[12];
	char *ptr = buffer;
	int is_negative = (num < 0);

	if (num == 0)
	{
		write(1, "0", 1);
		(*count)++;
		return;
	}
	if (is_negative)
	{
		write(1, "-", 1);
		(*count)++;
		num = -num;
	}
	while (num > 0)
	{
		*(ptr++) = num % 10 + '0';
		num /= 10;
	}
	while (ptr > buffer)
	{
		write(1, --ptr, 1);
		(*count)++;
	}
}
