#include "main.h"

/**
 * _memset - loads a constant byte into memory
 * @s: memory area pointer
 * @b: constant byte to be loaded
 * @n: number of bytes to be loaded
 * Return: char*
 */

char *memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
