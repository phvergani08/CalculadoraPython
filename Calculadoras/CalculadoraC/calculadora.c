#include <stdio.h>

int main()
{
    char operator;
    int num1 = 0, num2 = 0;
    int result = 0;


    printf("First number: ");
    scanf("%d", &num1);
    
    printf("Second number: ");
    scanf("%d", &num2);
    
    printf("Operator: ");
    scanf(" %c", &operator); // an space before %c
    
    printf("\n");

    /*Operators conditionals*/
    if (operator == '+')
    {
        result = num1 + num2;
        printf("%d", result);
    }
    else if (operator == '-')
    {
        result = num1 - num2;
        printf("%d", result);
    }
    else if (operator == '*')
    {
        result = num1 * num2;
        printf("%d", result);
    }
    else if (operator == '/')
    {
        result = num1 / num2;
        printf("%d", result);
    }
    else
    {
        printf("error.");
    }
}