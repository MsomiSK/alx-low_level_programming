#include <stdio.h>
#include "main.h"

/**
 * main - that prints all arguments it receives.
 * @argc: num of arguments
 * @argv: arrays of arguments
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
