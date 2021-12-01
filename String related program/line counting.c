/*Count the line of a input string.*/

#include<stdio.h>
#include<string.h>
int main()
{
	int count=1,i;
	//char str[100];
	char str[100]="hello\nThere is nothing in the given input";
//	gets(str);
	printf("%s",str);
 
	if(strlen(str)>0)
	{
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='\n')
			{
				count++;
			}
		}
		if(count>=1)
		{
			printf("\nThe no of line/lines in the string is/are: %d",count);
		}
	}	
	else
	{
		printf( "\nThere is nothing in the given input");
	}
 
 return 0;
}