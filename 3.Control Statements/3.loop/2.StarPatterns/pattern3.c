//pattern 3
/*
    *****
    ****
    ***
    **
    *
*/
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
            printf("*");

        printf("\n");
    }
return 0;
}
