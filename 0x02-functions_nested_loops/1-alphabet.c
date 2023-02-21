#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Print alphabet in lower case,
 * followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c = 'a';
	/*c represent alphabetical letters*/
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
