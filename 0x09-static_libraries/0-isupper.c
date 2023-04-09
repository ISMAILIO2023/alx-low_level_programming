#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @s: input
 * Return: 1 if s is uppercase, 0 otherwise
 */
int _isupper(int s)
{
	if (s >= 'A' && s <= 'Z')
		return (1);
	else
		return (0);
}
