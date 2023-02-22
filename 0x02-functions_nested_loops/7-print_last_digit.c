#include "main.h"

/**
 * print_last_digit - Entry point
 * @num: integer value
 * Description: Prints the last digit of a number
 * Return: number
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (num < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
