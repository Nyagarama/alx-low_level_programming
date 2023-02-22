#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints natural numbers
 * @n: first integer
 * Description: prints all naturaral numbers from n to 98,
 * followed by a new line.
 * Return: Always (0).
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
