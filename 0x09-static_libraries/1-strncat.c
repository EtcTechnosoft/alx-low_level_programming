#include "makit.h"

/**
 **_strncat - concatenates two strings of two pointers
 *
 *@src: the pointer olds the string
 *@dest: this pointer holds the concatenation
 *@n: the size of bytes to be used from src
 *
 * Return: the concatenated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; b < n && src[b] != 0; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
