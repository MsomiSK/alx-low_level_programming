#include "variadic_functions.h"

/**
  * sum_them_all - ...
  * @n: ...
  * Return: ...
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int w = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (w < n)
		{
			sum += va_arg(args, int);
			w++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
