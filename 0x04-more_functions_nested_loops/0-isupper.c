#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input to be checked
 * Return: return 1 if the character is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

