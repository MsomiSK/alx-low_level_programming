#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if input integer is a prime number
 * @n: number to evalute
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively calculate if a number is a prime
 * @n: number to evaluate
 * @i : iterator
 * Return: 1 if n is a prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
