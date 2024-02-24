#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the alphabet in inverse
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
