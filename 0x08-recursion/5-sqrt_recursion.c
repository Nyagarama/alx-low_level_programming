#include "main.h"

/**
 * print_sqrt -Print the natural square of a number.
 * @num: print the square root of number.
 * @root: The base to print the square root.
 * Return: (-1) if num does not have a natural square root.
 * 	(0) if num has a natural square root.
 */
int print_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (print_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: number returns the square root of (n).
 * Return: (-1) if n does not have a natural square root.
 * 	(0) if n has a natural square root.
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (print_sqrt(n, root));
}
