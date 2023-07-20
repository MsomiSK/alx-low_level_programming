#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_all - function that prints anything
  * @format: conversion specifier to be printed
  * Return: Nothing
  */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int k = 0;
	unsigned int s = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[k])
	{
		s = 0;
		while (s < 4)
		{
			if (format[k] == *form_types[s].identifier)
			{
				form_types[s].f(separator, args);
				separator = ", ";
			}
			s++;
		}
		k++;
	}

	va_end(args);
	printf("\n");
}

/**
  * print_a_char - prints character of char type
  * @separator: separator of character
  * @args: list of variadic arguments
  * Return: Nothing
  */

void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
  * print_a_integer - prints character of integer type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: Nothing
  */

void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
  * print_a_float - prints character of float type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: Nothing
  */

void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
  * print_a_char_ptr - prints content of pointer to char type
  * @separator: separator of the character
  * @args: list of variadic arguments
  * Return: Nothing
  */

void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
