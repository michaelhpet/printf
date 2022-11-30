#include "main.h"

/**
 * print_bin - prints a binary representation of a number
 * @args: variadic arguments' list
 * Return: total number of characters printed
*/
int print_bin(va_list args)
{
	int i, j, count, bits, *nums;
	unsigned int num;

	count = 0;
	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		_putchar(48);
		count++;
		return (count);
	}

	bits = count_bits(num);
	nums = malloc(sizeof(unsigned int) * bits);
	if (nums == NULL)
		return (count);

	i = 0;
	while (num > 0)
	{
		nums[i++] = num % 2;
		num /= 2;
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
 * count_bits - return number of binary digits for an integer
 * @num: integer to parse
 * Return: number of bits in num binary representation
*/
int count_bits(unsigned int num)
{
	int count;

	if (num == 0 || num == 1)
		return (1);

	count = 0;
	while (num > 0)
	{
		num /= 2;
		count++;
	}

	return (count);
}
