/*Print any string in reverse way*/

#include <stdio.h>
#include <string.h>

int main()
{
    int a, j;
    char str[20];
    printf("\nEnter any word:");
    scanf("%s", &str);
    a = strlen(str) - 1;

    for (j = a; j >= 0; j--)
    {
        printf("%c", str[j]);
    }

    return 0;
}
