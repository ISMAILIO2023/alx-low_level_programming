#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that print name using pointer to function
 * @name: string t add
 * @f: pointer to function
 * Return: none
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
