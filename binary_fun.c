#include "main.h"
#include <stdarg.h>

/**
  * print_binary - convert decimal into binary and print it
  * @p: pointer to list of arguments to get number
  * Return: length of binary
  */
 int print_binary(va_list p)
{
	 int n, i, size;
	 int arr[32];

	n = va_arg(p, int);
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	size = 0;
	while (n > 0)
	{
		arr[size++] = n % 2;
		n /= 2;
	}
	for (i = size - 1; i >= 0; i--)
		_putchar(arr[i] + '0');

	return (size);
}
