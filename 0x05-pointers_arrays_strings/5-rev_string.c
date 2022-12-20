#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int x;

	while (s[fcounter] != '\0')
		fcounter++;

	for (x = 0; x < fcounter; x++)
	{
		fcounter--;
		rev = s[x];
		s[x] = s[fcounter];
		s[fcounter] = rev;
	}
}
