#include "main.h"

/**
 * print_int - prints an integer using va_list args
 * @args: variadic arguments' list
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int i, digits, count;
	double num;
	unsigned int big_num;

	count = 0;
	num = va_arg(args, int);
	if (num < 0)
	{
		_putchar(45);
		num *= -1;
		count++;
	}

	big_num = num;
	digits = count_digits(big_num);
	count += digits;
	if (big_num < 10)
		_putchar(big_num + 48);
	else if (big_num > 9 && big_num < 100)
	{
		_putchar((big_num / 10) + 48);
		_putchar((big_num % 10) + 48);
	}
	else if (big_num > 99 && big_num < 1000)
	{
		_putchar((big_num / 100) + 48);
		_putchar(((big_num / 10) % 10) + 48);
		_putchar((big_num % 10) + 48);
	}
	else
	{
		_putchar((big_num / _pow(10, digits - 1)) + 48);
		for (i = (digits - 2); i > 0; i--)
			_putchar(((big_num / _pow(10, i)) % 10) + 48);
		_putchar((big_num % 10) + 48);
	}

	return (count);
}

/**
 * count_digits - count number of digits of an integer
 * @number: integer which digits to count
 * Return: number of digits in n
 */
int count_digits(unsigned int number)
{
	int digits;

	unsigned int tmp = number;

	digits = (number > 9) ? 2 : 1;

	while ((tmp / 10) > 9)
	{
		digits++;
		tmp /= 10;
	}

	return (digits);
}


/**
 * _pow - computes the exponential of a number
 * @base: base number
 * @exp: exponent
 * e.g, _pow(10, 3) = 10 * 10 * 10 = 1000
 * Return: expononential result
 */
int _pow(int base, int exp)
{
	int i, result;

	result = 1;
	for (i = 0; i < exp; i++)
		result *= base;

	return (result);
}
