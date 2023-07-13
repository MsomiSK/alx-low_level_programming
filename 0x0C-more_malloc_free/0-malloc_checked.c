#include <stdio.h>
#include "main.h"
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: num of bytes to allocate
 * Return: a pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
