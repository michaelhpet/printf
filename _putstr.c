#include "main.h"
#include <stdio.h>

/**
 * _putstr - print string (without new line)
 * @s: address of first character
*/

void _putstr(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
