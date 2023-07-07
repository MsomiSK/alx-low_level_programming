#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - print sum of args positive numbers
 * @argc: num arguments
 * @argv: array arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			e = argv[j];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
