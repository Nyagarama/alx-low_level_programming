#include "main.h"

/**
 * _abs - Entry point
 * @i: integer output
 * Description: Compute the absolute value of an integer
 * Return: absolute value of i.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}	
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
