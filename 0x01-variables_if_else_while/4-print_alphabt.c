#include <stdio.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Prints the alphabet with q and e.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
