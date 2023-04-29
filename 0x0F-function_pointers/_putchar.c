#include <unistd.h>

/**
 *  _putchar - function that write the character c to stdout
 *  @c: the character
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}