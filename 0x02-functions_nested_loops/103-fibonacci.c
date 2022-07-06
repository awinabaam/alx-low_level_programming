#include "main.h"
#include <stdio.h>

/**
 * main - prints the sum of even Fibinacci numbers !> 4000000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long fib = 0, fib1 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib + fib1;
		if (fibsum > 4000000)
		{
			break;
		}
		if ((fibsum % 2) === 0)
		{
			tot_sum += fibsum;
		}
		fib = fib1;
		fib1 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
