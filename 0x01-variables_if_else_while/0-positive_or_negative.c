#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description : print positive number, negative number or zero
 * Return : Success (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	/* If the number is greater than 0 */
	{
		printf ("%d is positive\n", n);
		/* Display n as a positive digit */
	}
	else if ( n == 0 )
	{
		printf ("%d is zero\n", n);
		/* Display n as 0 */
	}
	else if ( n < 0 )
	{
		printf ("%d is negative\n", n);
		/* Display n as a negative digit */
	}
	return (0);
}
