#include "main.h"

/**
 * _islower - check for the lowercase character
 *
 * Return: returns 1 if the character is lowercase and 0 if not
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
	
