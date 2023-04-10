#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string that contains the binary number
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decimal = 2 * decimal + (b[a] - '0');
	}
	return (decimal);
}

