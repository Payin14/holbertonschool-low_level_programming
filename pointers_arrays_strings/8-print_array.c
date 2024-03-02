#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements
 * of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 * Return: empty
 */
void print_array(int *a, int n)
{
	int i;

	if (n !=  0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}
