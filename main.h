#ifndef H
#define H

#include <stdarg.h>

/**
  * struct specifier - specifying which type to be printed
  * @c: specifier
  * @f: poiner to function to print corresponding type
  */
typedef struct specifier
{
	char c;
	int (*f)(va_list p);
} sp;

int _putchar(char c);
int (*print_argument(char c))(va_list);
int print_int(va_list p);
int print_string(va_list p);
int print_char(va_list p);
int print_per(va_list p);
int _printf(const char *format, ...);

#endif /* H */