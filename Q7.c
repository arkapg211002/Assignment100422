/*Write a program in C to display the pattern as follows:
    1
    01
    101
    0101
    10101
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
        if(i%2 ==0)
        {
            for(j=1;j<=i;j++)
            {
                printf((j%2==0)?"1":"0");
            }
            printf("\n");
        }
        else
        {
            for(j=1;j<=i;j++)
            {
                printf((j%2==0)?"0":"1");
            }
            printf("\n");
        }
    }
}
