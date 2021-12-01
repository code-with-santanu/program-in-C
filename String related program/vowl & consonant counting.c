/*Count the no of vowel present in a string.Then count the no of letter present in the string.
  .Next change the lower case vowel to uppercase and upper case consonant to lower case.*/


#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0,lc=0;
	char str[20];
	printf("\nEnter a string: ");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	{
		if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || 
			str[i]=='I' || str[i]=='O' || str[i]=='U')
			{
				count++;
			}
    }
	
	if(count>0)
	{
		printf("The number of vowel in the string is:%d",count);
    } 
	else
    {
	  printf("There is no vowel exist in the string");
	}
	
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
		{
			lc++;
		}
	}
	
		if(lc>0)
		{
				printf("\nThe no of letters present in this string is: %d",lc);
		}		
    
		else
		{
			printf("\nThere is no letter present");
        }
		
		printf("\nThe unmodified string is: %s",str);
	
	
	for(i=0;i<strlen(str);i++)
    {
		 if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')	
		{
			str[i]=str[i]-32;
			
		}
		else if (str[i]>=65&&str[i]<=90)
		{
			if(str[i]!='A' && str[i]!='E' &&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
			{
				str[i]=str[i]+32;
			
			}
		}	
		

	}
	printf("\nThe modified string is: %s",str);
	
	
	return 0;
	
	
}