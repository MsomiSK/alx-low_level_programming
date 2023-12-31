#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @n: function copies
 * @src: bytes from memory
 * @dest: to memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
