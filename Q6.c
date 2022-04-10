/*Write a program in C to display the pattern as follows:
    1
   2 2
  3 3 3
 4 4 4 4
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
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
