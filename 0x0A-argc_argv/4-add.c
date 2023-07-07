#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check-string there are digit.
 * @str: array str
 * Return: 0
 */
int check_num(char *str)
{
	/*declare variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*count string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - print program name
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*declare variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*goes through whole array*/

	{
		if (check_num(argv[count]))

		{
	str_to_int = atoi(argv[count]); /*ATOI --> convert string to int*/
	sum += str_to_int;
		}
		/*the condition if one num contains symblos not digits*/

		else
		{
			printf("error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
