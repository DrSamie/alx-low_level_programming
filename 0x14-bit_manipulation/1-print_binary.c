#include "main.h"
/**
 * print_binary – prints binary equivalent of a decimal number
 * @n: the number to be printed to binary
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int new;

	for (a = 63; a >= 0; a--)
	{
	new = n >> a;

	if (new & 1)
	{
	_putchar('1');
	count++;
	}
	else if (count)
	_putchar('0');
	}
	if (!count)
	_putchar('0');
}

