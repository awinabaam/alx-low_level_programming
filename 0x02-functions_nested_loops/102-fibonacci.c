#include "main.h"
#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j, k, sum;

	j = 0;
	k = 1;

	for (i = 0; i < 50; i++)
	{
		sum =  j + k;
		printf("%lu", sum);

		j = k;
		k = sum;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
