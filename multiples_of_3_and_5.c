#include <stdio.h>

/**
  *If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
  *Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main(int argc, char const *argv[])
{
	int sum3 = 0;
	int sum5 = 0;
	int sum15 = 0;
	int i = 0;

	while ((3 * i < 1000)) 
	{
		sum3 += 3 * i;

		if (5 * i < 1000) 
		{
			sum5 += 5 * i;
		}

		if (15 * i < 1000)
		{
			sum15 += 15 * i;
		}

		i++;
	}

	printf("The sum is: %d\n", (sum3 + sum5 - sum15));
	printf("Number of steps: %d\n", i);

	return 0;
}
