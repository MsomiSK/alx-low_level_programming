#include <stdio.h>

/**
 * main - the program prints a[2] = 98, followed by \n
 * Return: 0.
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * write lines of your code here...
	 * remember:
	 * - youre not allowed to modify p
	 * - youre not allowed to use a
	 * - youre not allowed to code anything else than this line
	 * - only one statement
	 */

	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
