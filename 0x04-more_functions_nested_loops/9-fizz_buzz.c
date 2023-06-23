#include <stdio.h>
#include "main.h"

/**
 * main - FizzBuzz test is an interview designed to help filter out the 99.5%
 *
 * Description: program that prints numbers from 1 to 100, with  new line.
 * multiples of 3 print Fizz and for the multiple of 5 print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("Fizzbuzz");
		else if (n % 3 == 0)
			printf("fizz");
		else if (n % 5 == 0)
			printf("buzz");
		else
			printf("%i", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
