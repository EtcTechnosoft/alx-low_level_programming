#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers..
 *
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
int i, j;
int **s;

if (height <= 0 || width <= 0)
return (NULL);

s = malloc(sizeof(int *) * height);

if (s == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
s[i] = malloc(sizeof(int) * width);
if (s[i] == NULL)
{
free(s);
for (j = 0; j <= i; j++)
free(s[j]);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
s[i][j] = 0;
}
}

return (s);
}
