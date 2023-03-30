#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: number for letters
 * Return: n value
 */
char *leet(char *n)
{
	int l, m;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (l = 0; n[l] != '\0'; l++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[l] == s1[m])
			{
				n[m] = s2[j];
			}
		}
	}
	return (n);
}
