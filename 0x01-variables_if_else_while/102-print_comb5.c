#include <stdio.h>

/**
 * main - is the main
 *
 * Return: always success 0
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = 0 ; k < 10 ; k++)
			{
				for (l = 0 ; l < 10 ; l++)
				{
					if (i < l && i != l)
					{
						putchar(i + '0');
						putchar(l + '0');
					}
					if (i + l != 17)
					{
						putchar(',');
						putchar(' ');
					}
					if (j < k && j != k)
					{
						putchar(j + '0');
						putchar(k + '0');
					}
					if (j + k != 17)
					{
						putchar(' ');
						putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
