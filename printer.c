#include "main.h"

/**
 * printer - prints according to format
 * @s: format
 * @args: argument listi
 * Return: number of chars printed
*/
int printer(char format, va_list args)
{
	int i, print_count;

	format_t formats[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_char},
	};

	for (i = 0; i < 3; i++)
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
 * print_string - prints a string using a va_list
 * @args: variadic args list
 * Return: number of characters printed
*/
int print_str(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	len = _strlen(str);

	_putstr(str);

	return (len);
}
