#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: destination
 * @src: source
 * Return: pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
