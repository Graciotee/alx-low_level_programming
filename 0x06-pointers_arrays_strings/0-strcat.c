#include "main.h"

/**
 * char *_strcat - function that concatenates two strings
 * @src: concatenate to dest
 * @dest: concatenate from src
 * Return: print dest
 */

char *_strcat(char *dest, char *src)
{
	char dest[30] = 'concatenate';
	char src[] = 'strings';

	strcat(dest, src);
	_putchar('dest');

	return (0);
}
