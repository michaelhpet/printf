#include "main.h"

/**
 * printer - prints according to format
 * @format: string to print
 * @args: argument listi
 * Return: number of chars printed
*/
int printer(char format, va_list args)
{
	int i, print_count;

	format_t formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{'b', print_bin},
		{'u', print_int},
		{'o', print_oct},
	};

	print_count = 0;
	for (i = 0; i < 7; i++)
	{
		if (format == formats[i].specifier)
			print_count = formats[i].printer(args);
	}

	return (print_count);
}

/**
 * print_char - prints a char using a va_list
 * @args: variadic args list
 * Return: length of char printed
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}

/**
 * print_str - prints a string using a va_list
 * @args: variadic args list
 * Return: number of characters printed
*/
int print_str(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		_putstr("(null)");
		return (6);
	}

	len = _strlen(str);
	if (*str)
		_putstr(str);

	return (len);
}
