/*  First n peime no */

#include <stdio.h>
#include <math.h>

//finding no of divisor of a no
int isPrime(int n)
{
	int i, count = 0;
	for (i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	return count;
}

//finding the first n prime numbers and printing....
{
	int n, i = 2, count = 0;
	printf("\nEnter the value of n:");
	scanf("%d", &n);
	while (count < n)
	{
		if (isPrime(i) == 1)
		{
			printf("%d\t", i);
			count++;
		}

		i++;
	}

	return 0;
}