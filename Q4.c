/*Write a program in C to display the pattern as :
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
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}