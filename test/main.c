#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

    _printf(" %c \n", '0');
    printf(" %c \n", '0');
    _printf(" %c\n", '0' - 256);
    printf(" %c\n", '0' - 256);
    _printf("%c \n", '0' + 256);
    _printf(" %c %c %c \n", '0', 0, '1');
    _printf(" %c %c %c \n", ' ', ' ', ' ');
    _printf(" %c %c %c \n", '1', '2', '3');
    _printf(" %c %c %c \n", '2', '1', 0);
    _printf(" %c %c %c \n", 0, '1', '2');

	return (0);
}
