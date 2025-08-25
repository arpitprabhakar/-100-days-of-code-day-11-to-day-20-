//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf(" %d",&n);
    
    int i,sum=0;

    for (i = 1; i<=n; i++)
    {   
        sum +=(2*i-1);
        
    }
    printf("sum = %d",sum);
    
return 0;
}