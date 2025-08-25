//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main()
{
    int result, num1, num2;
    char operator;
    printf("Enter num 1: ");
    scanf("%d", &num1 );
    printf("Enter num 2: ");
    scanf("%d", &num2);
    printf("Enter the required operator: ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%d", result);
        break;

    case '-':
        result = num1 - num2;
        printf("%d", result);
        break;

    case '*':
        result = num1 * num2;
        printf("%d", result);
        break;

    case '/':
        result = num1 / num2;
        printf("%d", result);
        break;

    case '%':
        result = num1 % num2;
        printf("%d", result);
        break;

    default:
        printf("invalid operator");
        break;
    }
}