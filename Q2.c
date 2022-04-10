/*Write a program in C to dispaly the pattern as follows:
    1
    12
    123
    1234
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
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}