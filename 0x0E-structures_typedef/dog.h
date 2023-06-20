#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog name age and the owner
 * @name: first input
 * @age: second input
 * @owner: third input
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - rypedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
