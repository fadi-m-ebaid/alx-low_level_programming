#include "main.h"

/*
 * *_memcpy - Copy memory area from src to the dest
 * @src: pointer that carry the memory values of the info to be coppied
 * @dest: pointer which will recive the info
 * @n: the number of bytes to be coppied from src to dest
 * return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
