/*Write a program to display the pattern as follows:
           *
          ***
         *****
        *******
         *****
          ***
           *
*/
#include<stdio.h>
void pattern(int);
void main()
{
    int n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    pattern(n);
}
void pattern(int n)
{
    int i,j,k;
    for(i=1;i<=(n-(n/2));i++)
    {
        for(j=i;j<=(n/2);j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=(n/2);i>=1;i--)
    {
        for(j=i;j<=(n/2);j++)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
           