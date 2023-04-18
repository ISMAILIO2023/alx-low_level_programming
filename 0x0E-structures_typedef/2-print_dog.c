#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @n: struct dog to print
 */
void print_dog(struct dog *n)
{
	if (n == NULL)
		return;

	if (n->name == NULL)
		n->name = "(nil)";
	if (n->owner == NULL)
		n->owner = "(nil)";


	printf("Name: %s\nAge: %f\nOwner: %s\n", n->name, n->age, n->owner);
}
