#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if the string contains non-digit char
 * @s: string to be evaluated
 * Return: 0 if non-digit is found, 1 otherwise
 */

int is_digit(char *s)
{
	int w = 0;

	while (s[w])
	{
		if (s[w] < '0' || s[w] > '9')
			return (0);
		w++;
	}
	return (1);
}

/**
 * _strlen - returns string length
 * @s: string to evaluate
 * Return: string length
 */

int _strlen(char *s)
{
	int w = 0;

	while (s[w] != '\0')
	{
		w++;
	}
	return (w);
}

/**
 * errors - handles the errors for the main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies the two positive numbers
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, w, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (w = 0; w <= len1 + len2; w++)
		result[w] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (w = 0; w < len - 1; w++)
	{
		if (result[w])
			a = 1;
		if (a)
			_putchar(result[w] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
