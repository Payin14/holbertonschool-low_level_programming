#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int numComb = 0;

	while (numComb <= 9)
	{
		putchar(numComb + '0');

		if (numComb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		numComb++;
	}

	putchar('\n');

	return (0);
}
