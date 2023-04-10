#include "main.h"
/**
 * set_bit - sets a bit value to 1 at a given index
 * @n: pointer to the number that changes
 * @index: index of the bit to be set to 1
 * Return: 1 if success, -1 if failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

