#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - summation
 * @n: first number
 * Description: prints numbers to 98
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i, ", i);
		}
		printf("98\n");
	}
}
