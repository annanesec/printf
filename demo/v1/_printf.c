#include "main.h"

/**
 * _printf - print according to format
 * @format: format given
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, size;
	va_list args;
	int (*f)(va_list args);

	if (!format)
		return (-1);

	va_start(args, format);
	i = 0;
	size = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			size++;
		}
		else
		{
			f = print_argument(format[i + 1]);
			if (f)
			{
				size += f(args);
			}
			else
				size += 2;
			i++;
		}
		i++;
	}
	va_end(args);

	return (size);
}
