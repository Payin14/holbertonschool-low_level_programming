#include "main.h"

/**
 * puts_half -  function that prints half of a string,
 * followed by a new line.
 * @str: string to check
 * Return: empty
 */
void puts_half(char *str)
{
	int i = 0;
	int size, j;

	while (str[i] != '\0')
	{
		i++;
	}

	size = i; /*Length str without '\0'*/

	if ((i % 2) == 0)
	{
		for (j = (size / 2); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (((size - 1) / 2) + 1); str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
