#include <stdio.h>

/**
 * main - main function of the code
 * Description: Prints the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char numberPart = '0';
	char letterPart = 'a';

	while (numberPart <= '9')
	{
		putchar(numberPart);
		numberPart++;
	}

	while (letterPart <= 'f')
	{
		putchar(letterPart);
		letterPart++;
	}

	putchar('\n');

	return (0);
}
