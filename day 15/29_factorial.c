//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int fact,n,i;
    fact=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact*=i;    //fact=fact*i
    }
    printf("%d", fact);
return 0;
}