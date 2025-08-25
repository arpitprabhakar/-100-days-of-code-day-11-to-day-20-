/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/
#include<stdio.h>
int main()
{
       int units, bill;
    printf("Enter number of units of electricity consumed: ");
    scanf("%d",&units);
    if (units<=100)
    {
        bill=5*units;
        printf("your bill is %d",bill);

    }
    else if (units>100&&units<=200)
    {
        bill=500+(7*(units-100));
        printf("your bill is %d",bill);
    }
    else if (units>200&&units<=300)
    {
        bill=1200+(10*(units-200));
        printf("your bill is %d",bill);
    }
    else
    {
        bill=2200+(units-300)*12;
        printf("your bill is: %d",bill);
    }
    return 0;


}