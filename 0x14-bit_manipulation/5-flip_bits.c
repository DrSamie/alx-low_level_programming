#include "main.h"
/**
 * flip_bits - computes the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int new;
	unsigned long int exclude = n ^ m;

	for (a = 63; a >= 0; a--)
	{
	new = exclude >> a;
	if (new & 1)
	count++;
	}

	return (count);
}

