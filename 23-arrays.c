#include <stdio.h>

int main() {

    // double prices[] = {12.0, 52.0, 5.0, 17.0};
    // double prices[3];
    double prices[4] = {19.0};
    
    prices[1] = 8;
    prices[2] = 49.99;
    prices[3] = 18.00;

    printf("$%.2lf", prices[0]);

    return 0;
}