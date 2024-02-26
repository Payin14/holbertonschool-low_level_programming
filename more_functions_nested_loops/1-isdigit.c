#include "main.h"

/**
 * _isdigit - checks if parameter is a digit.
 * @c: input digit.
 * Return: 1 if is a digit through 0 - 9, 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
