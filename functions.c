#include "main.h"
#include <stdio.h>

/**
  * print_int - print integer
  * @args: pointer to list to get integer
  * Return: digit count
  */
int print_int(va_list args)
{
	int a, i, size;
	int arr[100];

	i = 99;
	a = va_arg(args, int);
	size = 0;
	if (a < 0)
	{
		a *= -1;
		size++;
		_putchar('-');
	}
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
  * print_char - print character
  * @args: pointer to list to get integer
  * Return: 1
  */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
  * print_string - print string
  * @args: pointer to list to get string
  * Return: string length
  */
int print_string(va_list args)
{
	int i;
	char *s;

	i = 0;
	s = va_arg(args, char *);
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
		_putchar(s[i++]);
	return (i);
}

/**
  * print_per - print % sign
  * @args: pointer to list
  * Return: 1
  */
int print_per(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
