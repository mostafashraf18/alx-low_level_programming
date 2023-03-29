#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int nl = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{

		dest[nl + i] = src[i];
	}
	dest[nl + i] = '\0';
	return (dest);
}
