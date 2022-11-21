#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int print_count;

	va_start(args, format);

	print_count = _vprintf(format, args);

	va_end(args);

	printf("Char count: %d\n", print_count);
	return (print_count);
}
