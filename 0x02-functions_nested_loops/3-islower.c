#include "main.h"

/**
 * _islower - Returns 1 if the input is a lowercase character, other returns 0
 *
 * @c: The character is ASCII code.
 *
 * Return: 1 for lowercase. 0 for the anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
