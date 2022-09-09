#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* This program prints 'is positive' if the number is greater than zero
* prints 'is zero' if the number is zero
* prints 'is negative' if the number is less than zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  	/* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}		
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}	
	return (0);
}

