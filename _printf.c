#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int print_count;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	print_count = _vprintf(format, args);

	va_end(args);

	return (print_count);
}
