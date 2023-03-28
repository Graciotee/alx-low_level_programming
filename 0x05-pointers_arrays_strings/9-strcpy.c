#include "main.h"

/**
 * char *_strcpy - function that copies string pointed
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int m = 0;

	while (*(src + n) != '\0')
	{
		n++;
	}
	for ( ; m < 1 ; m++)
	{
		dest[m] = src[m];
	}
	dest[n] = '\0';
	return (dest);
}

