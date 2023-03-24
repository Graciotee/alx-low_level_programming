#include "main.h"

/**
 * main - lowercase alphabets
 * lowercase alphabets to be printed
 * Return: always 0
 */

void print_alphabet(void);
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
