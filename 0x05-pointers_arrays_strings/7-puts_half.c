#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a \n
 * function should print the second half of the string
 * @str: input
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\n')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
