#include "main.h"

/**
 * main - Entry point
 * Description: print _putchar followed by a new line.
 *Return: Success (0).
 */
int main(void)
{
	char str[] = "_putchar";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
