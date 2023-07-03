#include "main.h"

/**
 * _strchr - a function that locates a char in a string.
 * @s: string to be searched
 * @c: char to be located
 * Return:  a pointer to the first occurrence of the char c in the string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
