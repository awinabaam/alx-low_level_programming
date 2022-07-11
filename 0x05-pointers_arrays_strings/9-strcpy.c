#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy a string from a source to a destination
 *
 * @dest: destination of the copied string
 * @src: source of the string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
