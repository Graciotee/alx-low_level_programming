#include "main.h"

/**
 * _atoi - that converrts a string to an integer
 * @s: string to be converted
 *
 * Return: int converted from string
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int digit = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '_')
			digit *= -1;
			i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	digit *= -1;
	return (n * digit);
}
