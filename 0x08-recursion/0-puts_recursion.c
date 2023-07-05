#include "main.h"

/**
 * _putchar_recursion - a function that prints a string, followed by a \n
 * @s : input
 * Return: 0
 */
void _putchar_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
