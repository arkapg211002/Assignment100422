/*Write a program in C to display the pattern as follows:
             1
            2 3
           4 5 6
          7 8 9 10
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
    int i,j,l,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(l=1;l<=i;l++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");

    }
}