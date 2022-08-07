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

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] && format[1] == ' ' && !format[2])
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
		else if (format[i + 1] != '\0')
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
		else
			return (-1);
		i++;
	}
	_putchar(-1);
	va_end(args);

	return (size);
}

