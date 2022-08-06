#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_argument - print argument corresponding to specifier
 * @c: specifier
 * Return: void
 */
int (*print_argument(char c))(va_list p)
{
	sp list[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'%', print_per}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (c == list[i].c)
			return (list[i].f);
		i++;
	}
	exit(1);
}
