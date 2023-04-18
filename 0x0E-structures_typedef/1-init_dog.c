#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @n: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *n, char *name, float age, char *owner)
{

	if (n == NULL)
		n = malloc(sizeof(struct dog));
	n->name = name;
	n->age = age;
	n->owner = owner;
}
