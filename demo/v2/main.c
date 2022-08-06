#include <stdio.h>
#include "main.h"

/**
  * main - print
  * Return: always 0
  */
int main(void)
{
	int i;

	i = printf("salam I'm %c years old\n", 'k');
	printf(" = %d\n", i);
        i = _printf("salam I'm %c years old\n", 'k');
	printf(" = %d\n", i);
	i = printf("salam I'm %%%% %i years %s%s o%cld\n%d", 19, "ahmad", "slme", 'k', 0);
	printf("\n");
	printf(" = %d\n", i);
	i = _printf("salam I'm %%%%%r %i years %s%s o%cld\n%d", 19, "ahmad", "slme", 'k', 0);
	printf("\n");
	printf(" = %d\n", i);
	return (0);
}
