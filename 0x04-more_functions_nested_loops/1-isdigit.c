#include "main.h"

/**
 * _isdigit - checks if a charachter is a digit or not
 * @c: input
 * Return: return 1 if the number is digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
