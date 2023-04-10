#include "main.h"
/**
 * get_bit - Returns the value of a bit at an index in a decimal number
 * @n: search number
 * @index: bit index
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_size;

	if (index > 63)
	return (-1);

	bit_size = (n >> index) & 1;

	return (bit_size);
}

