#include "function_pointers.h"

/**
  * print_name - func that prints a name
  * @name: name to be printed
  * @f: points to function
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
