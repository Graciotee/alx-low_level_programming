#include "main.h"
#include <stdio.h>

/**
 * rot13 - encode rot13
 * @s: string parameter
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int n;
	int m;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[n] == data1[m])
			{
				s[n] = datarot[m];
				break;
			}
		}
	}
	return (s);
}
