#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @r: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *r)
{
	int lenthstring = 0;

	if (*r)
	{
		lenthstring++;
		lenthstring += _strlen_recursion(r + 1);
	}

	return (lenthstring);
}
