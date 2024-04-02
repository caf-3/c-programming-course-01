#include <stdio.h>
#include <string.h>

int main() {

    // char x = 'X';
    // char y = 'Y';
    // char temp;

    // temp = x;
    // x = y;
    // y = temp;

    // printf("x = %c\n", x);
    // printf("y = %c\n", y);

    char x[15] = "Water";
    char y[15] = "Soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}