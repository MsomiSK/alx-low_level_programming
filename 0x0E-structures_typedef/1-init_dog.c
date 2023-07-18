#include <stdlib.h>
#include "dog.h"

/**
 * init_dog – initialize the variable of type struct dog
 * @d: points to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 * Return: does not return any value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)

	{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
