#include "main.h"

/**
 * factorial - Prints the factorial of any number
 * @n: Integer Input.
 * Return: facorial number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Print error */
	else if (n == 0)
		return (1); /* Print the factorial of the number */
	else
		return (n * factorial(n - 1));
}
