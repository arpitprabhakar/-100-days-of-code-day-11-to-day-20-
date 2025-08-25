//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the number of month :");
    scanf("%d",&month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("this month have 31 days");
        break;
    case 2:
        printf("this month have 28 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("this month have 30 days");
        break;
    
    default:
        printf("you mistakenly entered wrong month");
        break;
    }
}
