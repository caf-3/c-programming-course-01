#include <stdio.h>

int main() {

    double prices[] = {5,0, 22, 14.0, 55.0, 22};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}