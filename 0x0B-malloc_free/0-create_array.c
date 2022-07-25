#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 *
 * @size: size of array
 * @c: specific char
 * Return: array if success, null otherwise
 * 
 */
Char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;
	p = malloc(size * sizeof(*p));
	if (size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		fprintf(stderr, "failed to allocate memory\n");
	}
	else
	{
		i = 0;
		while (i < size)
		{
			p[i] = c;
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
