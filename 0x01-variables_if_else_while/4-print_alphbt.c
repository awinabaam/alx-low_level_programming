#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'q' || 'e')
			putchar(alphabet);
	putchar('\n');

	return (0);
