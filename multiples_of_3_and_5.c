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

	for (int i = 1; i < 1000; ++i)
	{
		if (i % 3 == 0)
		{
			printf("multiple of 3 %d\n", i);
			sum3 += i;
		}
		if (i % 5 == 0)
		{
			printf("multiple of 5 %d\n", i);
			sum5 += i;
		}
		if (i % 15 == 0)
		{
			printf("multiple of 15 %d\n", i);
			sum15 += i;
		}
	}

	printf("The sum is: %d\n", (sum3 + sum5 - sum15));

	return 0;
}