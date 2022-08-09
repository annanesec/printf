#include "main.h"
#include <stdarg.h>

/**
  * print_pointer - print an adress in hexadecimal format
  * @list: pointer to argument list
  * @flags: array of flags
  * Return: Length of the number
  */
int print_pointer(va_list list, int *flags)
{
	void *p;
	unsigned long int n;
	int i, size, f;
	unsigned int arr[100];

	p = va_arg(list, void *);
	if (!p)
		return (_printf("(null)"));
	n = (unsigned long int)p, size = 0, f = 0;

	if (flags[0])
		_putchar('+'), f++;
	else if (flags[1])
		_putchar(' '), f++;
	_putchar('0'), _putchar('x');

	if (!n)
	{
		_putchar('0');
		return (3);
	}
	while (n > 0)
	{
		arr[size++] = n % 16;
		n /= 16;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (arr[i] < 10)
			_putchar(arr[i] + '0');
		else
			_putchar(arr[i] + 'W');
	}
	return (size + 2 + f);
}

/**
  * print_String - print string
  * Description: print printable characters literally and substitute
  * no printable characters wiwth "\x(ascii vali)"
  * @p: pointer to argument list
  * Return: Length of string
  */
int print_String(va_list p)
{
	char *s, *non_p;
	int i, size;

	s = va_arg(p, char *);
	if (!s)
		s = "(null)";
	i = 0;
	size = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 32 && s[i] < 127)
		{
			_putchar(s[i]);
			size++;
		}
		else
		{
			if (s[i] <= 15)
				non_p = "\\x0";
			else
				non_p = "\\x";
			size += _printf("%s%X", non_p, (int)s[i]);
		}
		i++;
	}
	return (size);
}