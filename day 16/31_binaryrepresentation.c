//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main()
{
    // int rev_binary,n,rem=0,binary=0,rem1,q;
    // printf("Enter value of n: ");
    // scanf("%d",&n);
    // while (n>0)
    // {
    //     rem=n%2;
       
    //     if (rem==0)
    //     {
    //         rev_binary=rem;
    //     }
    //     else if (rem==1)
    //     {
    //         rev_binary=rem;
    //     }
    //     n=n/2;
    //     printf("%d",rev_binary);
        
    // }
    // while(rev_binary>0)
    // {
        
    //     binary=binary*10+ rev_binary%10;
    //     printf("%d",binary);
    //     rev_binary/=10;
        
    // } 
    int n, binary = 0, place = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * place;
        n /= 2;
        place *= 10;
    }

    printf("The binary representation is: %d\n", binary);

   return 0;

    
}