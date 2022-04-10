/*Write a program in C to dislay the pattern as follows:
Here the integer n must be taken from the standard input device.
For n=1
1
For n=2
  1
1 2 1
  1
For n=3
    1
  1 2 1
1 2 3 2 1
  1 2 1
    1
*/
#include<stdio.h>
void pattern(int);
void main()
{
    int n,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    pattern(n);
}
void pattern(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(k=i-1;k>=1;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
