#include "main.h"

/**
 * _printf - handle s, c, i, d, % as printf
 * @format: the passing input
 * Return: count
 */
int _printf(const char *format, ...)
{
	int count = 0;
	char const *ptr;
	va_list ap;
	int cond = (!format || (format[0] == '%' && !format[1]) || (format[0] == '%' && format[1] == ' ' && !format[2]));

	if (cond)
		return (-1);
	va_start(ap, format);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			switch (*(++ptr))
			{
				case 'c':
					print_char(va_arg(ap, int), &count);
					break;
				case 's':
					print_string(va_arg(ap, const char *), &count);
					break;
				case '%':
					print_percent(&count);
					break;
				case 'd':
				case 'i':
					print_integer(va_arg(ap, int), &count);
					break;
				default:
					print_char('%', &count);
					print_char(*ptr, &count);
					break;
			}
		}
		else
		{
			print_char(*ptr, &count);
		}
	}
	va_end(ap);
	return (count);
}
