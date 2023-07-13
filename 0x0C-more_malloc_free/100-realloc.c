#include <stdio.h>
#include "main.h"
/**
 * *_realloc - function which reallocates memory block using malloc and free
 * @ptr: pointer to a memory previsouly allocated by malloc
 * @old_size: size of allocated memory for a ptr
 * @new_size: new size of newly allocated memory block
 * Return: pointer to a newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *ptr1;

	char *old_ptr;

	unsigned int w;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (w = 0; w < new_size; w++)
			ptr1[w] = old_ptr[w];
	}

	if (new_size > old_size)
	{
		for (w = 0; w < old_size; w++)
			ptr1[w] = old_ptr[w];
	}

	free(ptr);
	return (ptr1);
}
