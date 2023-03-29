#include "main.h"
#include <string.h>


/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);

}
