#include <stdio.h>
#include <ctype.h>

int main() {

    char unit;
    float temp;

    printf("\nIs the emperature in (F) or (C)?: ");
    scanf("%c", &unit);
    unit = toupper(unit);
    if(unit == 'C') {
        // printf("The temp is currently in C.\n");
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 /5) + 32;
        printf("\nThe temperature in Farenheit is: %.1f\n", temp);
    }else if(unit == 'F') {
        printf("\nEnter the temperature in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5 ) / 32;
        printf("\nThe temperature in Celsius is: %.1f\n", temp);
    }else {
        printf("%c is not a valid unit of measurement\n", unit);
    }
    

    return 0;
}