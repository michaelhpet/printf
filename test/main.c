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
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("This is a normal %\n");
    _printf("This is a normal %\n");

    printf("a number: %i\n", -3106);
    _printf("a number: %i\n", -3106);
    printf("another number: %d\n", 8943);
    _printf("another number: %d\n", 8943);

    printf("Binary: %b\n", 85);
    _printf("Binary: %b\n", 85);

    printf("Unsigned: %u\n", 1992);
    _printf("Unsigned: %u\n", 1992);

    printf("Octal: %o\n", 88);
    _printf("Octal: %o\n", 88);

    return (0);
}
