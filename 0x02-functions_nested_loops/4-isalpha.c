#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * Description: 'c is the charecter to be checked'
 *
 * Return: Always 1 (Success) otherwise 0
 */
	int _isalpha(int c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}
