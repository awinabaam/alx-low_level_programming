#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = 0; ones <= 9; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (!(hundreds == 9 && tens == 9 && ones == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
