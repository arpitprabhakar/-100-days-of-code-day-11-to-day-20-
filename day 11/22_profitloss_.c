//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    int cost, sell, percentage; 
    printf("Enter the buying cost of item: ");
    scanf("%d",&cost);
    printf("Enter the selling price of item: ");
    scanf("%d",&sell);
    if (cost>sell)
    {
        percentage=sell*100/cost;
        printf("you are %d%% in loss :(",percentage);

    }
    else if (cost<sell)
    {   
        percentage=cost*100/cost;
        printf("you are in %d%% profit :)",percentage);

    }
    else
    {
        printf(" you are neither in profit nor loss ");
    }

}