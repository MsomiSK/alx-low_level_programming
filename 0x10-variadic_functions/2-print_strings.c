#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - ....
  * @separator: ....
  * @n: ....
  * Return: ....
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int w = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (w < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (w != n - 1 && separator != NULL)
				printf("%s", separator);

			w++;
		}

		va_end(args);
	}

	printf("\n");
}
