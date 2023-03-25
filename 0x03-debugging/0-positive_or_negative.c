#include "main.h"

/**
 * positive_or_negative() - print n
 *
 * i: is either a positive or negative number or eqauals to zero
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
}
