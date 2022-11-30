#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>


/**
 * struct format - format specifier
 * @specifier: char specifying format
 * @printer: function to print arg for specifier
*/

struct format
{
	char specifier;
	int (*printer)(va_list args);
};

/**
 * format_t - type definition for format
*/
typedef struct format format_t;

int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int _putchar(char c);
void _putstr(char *c);
int _strlen(char *s);
int printer(char format, va_list args);
int print_char(va_list args);
int print_str(va_list args);
int is_specifier(char ch);
int print_int(va_list args);
int count_digits(unsigned int number);
int _pow(int base, int exp);
int print_bin(va_list args);
int count_bits(unsigned int num);
int print_oct(va_list args);
int count_octs(unsigned int num);

#endif /* _MAIN_H_ */
