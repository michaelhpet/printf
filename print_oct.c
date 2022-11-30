#include "main.h"

/**
 * print_oct - prints the octal representation of an integer
 * @args: variadic arguments' list
 * Return: total characters printed
*/
int print_oct(va_list args)
{
	int i, j, count, octs, *nums;
	unsigned int num;

	count = 0;
	num = va_arg(args, unsigned int);
	if (num < 8)
	{
		_putchar(num + 48);
		count++;
		return (count);
	}

	octs = count_octs(num);
	nums = malloc(sizeof(unsigned int) * octs);
	if (nums == NULL)
		return (count);

	i = 0;
	while (num > 0)
	{
		nums[i++] = num % 8;
		num /= 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(nums[j] + 48);
		count++;
	}

	free(nums);
	return (count);
}

/**
 * count_octs - returns the number of octal digits for an integer
 * @num: integer to parse
 * Return: number of bits in num octal representation
*/
int count_octs(unsigned int num)
{
	int count;

	if (num < 8)
		return (1);

	count = 0;
	while (num > 0)
	{
		num /= 8;
		count++;
	}

	return (count);
}
