#include "function_pointers.h"

/**
  * int_index - ....
  * @array: ....
  * @size: ....
  * @cmp: ....
  * Return: ....
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int w = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (w < size)
			{
				if (cmp(array[w]))
					return (w);

				w++;
			}
		}
	}

	return (-1);
}
