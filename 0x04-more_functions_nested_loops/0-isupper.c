#include "main.h"

/**
 * _isupper - this is a function to check upper case alphas
 * @c: an integer paramer
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}