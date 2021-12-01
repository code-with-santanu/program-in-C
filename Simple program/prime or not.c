/* A number is prime or not */

#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,count=0;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i == 0)
		{
			count++;
		}
	}
	
	if(count == 1)
	{
		printf("\nThe given number is prime");
	}
	else
	{
		printf("\nThe given number is not prime");
	}

	return 0;
}
