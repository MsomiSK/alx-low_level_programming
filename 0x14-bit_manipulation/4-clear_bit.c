#include "main.h"

/**
* clear_bit - a program that sets value of a given bit to 0
* @n: Pointer to the Number to Change
* @index: index of the bit to clear
* Return: 1 when successful, -1 for failure
*/

int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);

	return (1);
}
