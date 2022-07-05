#include "main.h"

/**
 * print_sign - Checks if input is greater than, equal to or less than zero(0)
 *
 * @n: The input is an integer
 *
 * Return: 1 if n > zero, zero if n ==  zero, -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
