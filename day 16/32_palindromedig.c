// palindrome
#include <stdio.h>
int main()
{
    int n, rem, rev = 0, org;

    printf("Enter value of n: ");
    scanf("%d", &n);
    org = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (org == rev)
    {
        printf("%d is a palindrome", rev);
    }
    else
    {
        printf("%d is not a palindrome", rev);
    }
}
