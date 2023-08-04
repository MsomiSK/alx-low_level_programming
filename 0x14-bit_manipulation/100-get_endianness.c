#include "main.h"

/**
* get_endianness - a program that checks if a machine is little / big endian
* Return: 0 if big endian, 1 if little endian.
*/

int get_endianness(void)

{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
