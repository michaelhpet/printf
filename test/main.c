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

    return (0);
}
