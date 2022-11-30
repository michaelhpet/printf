#include "main.h"

/**
 * _vprintf - utility function using state machine to print characters
 * @format: character string to print
 * @args: list of arguments passed
 * Return: number of characters printed
*/

int _vprintf(const char *format, va_list args)
{
	int state, print_count;

	state = 0;
	print_count = 0;
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%' && is_specifier(*(format + 1)) == 1)
				state = 1;
			else
			{
				_putchar(*format);
				print_count++;
			}
		}
		else if (state == 1)
		{
			if (*format == '%')
			{
				_putchar('%');
				print_count++;
			}
			else
				print_count += printer(*format, args);
			state = 0;
		}

		format++;
	}

	return (print_count);
}

/**
 * is_specifier - checks if a char is a format specifier
 * @ch: character to check
 * Return: 1 if ch is a specifier, 0 otherwise
*/
int is_specifier(char ch)
{
	int i;
	char specifiers[] = {'c', 's', '%', 'i', 'd', 'b', 'u', 'o'};

	for (i = 0; i < 8; i++)
	{
		if (specifiers[i] == ch)
			return (1);
	}

	return (0);
}
