#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    bool is_valid_operator;
    printf("\nEnter an operator (+, -, * or /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1:");
    scanf("%lf", &num1);

    printf("\nEnter number 2:");
    scanf("%lf", &num2);

    switch (operator){
    case '+':
        result = num1 + num2;
        is_valid_operator = true;
        break;
    case '-':
        result = num1 - num2;
        is_valid_operator = true;
        break;
    case '*':
        result = num1 * num2;
        is_valid_operator = true;
        break;
    case '/':
        result = num1 / num2;
        is_valid_operator = true;
        break;

    default:
        is_valid_operator = false;
        printf("%c is not valid\n", operator);
    }

    if(is_valid_operator) {
        printf("\nresult: %.2lf \n", result);
    }

}