#include <unistd.h>
/**
* _putchar: writes the character c to stdout
*
* @c: the character should print
*
* return: 1 (success)
*
* return: -1 (error) and error is set appropriately
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
