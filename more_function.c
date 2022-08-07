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

/**
  * print_unsigned - print unsigned integer
  * @p: pointer to list of arguments to get number
  * Return: length of number
  */
int print_unsigned(va_list p)
{
	unsigned int a, i, size;
	unsigned int arr[100];

	i = 99;
	a = va_arg(p, unsigned int);
	size = 0;
	while (a > 9)
	{
		arr[i--] = a % 10;
		a /= 10;
	}
	arr[i] = a;
	while (i < 100)
	{
		_putchar(arr[i++] + '0');
		size++;
	}
	return (size);
}

/**
  * print_octal - convert decimal to octal and print it
  * @p: pointer to argument list to get number
  * Return: length of octal
  */
int print_octal(va_list p)
{
	unsigned int n, size;
	unsigned int arr[100];
	int i;

	n = va_arg(p, unsigned int);
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	size = 0;
	while (n > 0)
	{
		arr[size++] = n % 8;
		n /= 8;
	}
	for (i = size - 1; i >= 0; i--)
		_putchar(arr[i] + '0');
	return (size);
}

/**
  * print_upper_hex - convert decimal to upper hexadecimal and print it
  * @p: pointer to argument list to get number
  * Return: length of hexa
  */
int print_upper_hex(va_list p)
{
	unsigned int n, size;
	unsigned int arr[100];
	int i;

	n = va_arg(p, unsigned int);
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	size = 0;
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
			_putchar(arr[i] + '7');
	}
	return (size);
}

/**
  * print_lower_hex - convert decimal to lower hexadecimal and print it
  * @p: pointer to argument list to get number
  * Return: length of hexa
  */
int print_lower_hex(va_list p)
{
	unsigned int n, size;
	unsigned int arr[100];
	int i;

	n = va_arg(p, unsigned int);
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	size = 0;
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
	return (size);
}
