#include <unistd.h>

/**
 * _putchar - that write character c to stdout
 * @c : char to be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
