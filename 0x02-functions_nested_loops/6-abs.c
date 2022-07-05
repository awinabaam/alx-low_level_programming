#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 *
 * @n: input number as an integer
 *
 * Return: Absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
