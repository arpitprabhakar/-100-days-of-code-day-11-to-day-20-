//Write a program to check if a number is prime.
#include<stdio.h>
int main()
{
    int n=0,i=0,mark=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n<2)
    {
        printf("n is not a prime number\n");
        return 0;
    }
    for(i=2;i<n;i++) 
    {
        if (n%i==0)
        {
            mark=1;
            break;   
        }
        
    }
    if (mark==0)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
   
    return 0;

}