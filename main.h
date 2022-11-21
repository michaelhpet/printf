#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int _vprintf(const char *format, va_list args);
int _putchar(char c);
void _putstr(char *c);
int _strlen(char *s);

#endif /* _MAIN_H_ */
