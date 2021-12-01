/*For input a and b ,find a^b */

#include<stdio.h>

int main()
{
	int a,b,i=1,t;
	printf("\nEnter any two no: ");
	scanf("%d%d",&a,&b);
	t=a;
	while(i<b)
	{
		t=t*a;
		i++;
	}
	printf("\n%d",t);
	
	return 0;
}