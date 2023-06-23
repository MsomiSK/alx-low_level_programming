#include <stdio.h>

/**
 *main - FizzBuzz test is an interview designed to help filter out the 99.5%
 *
 *Description: program that prints numbers from 1 to 100, with  new line.
 *fizz for  multiples of 3 print Fizz and for the multiple of 5 print Buzz
 *For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
