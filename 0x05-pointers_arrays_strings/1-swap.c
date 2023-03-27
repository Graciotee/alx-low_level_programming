#include "main.h"

/**
 * swap_int - swap var values
 * @a: pointera
 * @b: pointerb
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a;

	a = *a;
	*a = *b;
	*b = a;
}
