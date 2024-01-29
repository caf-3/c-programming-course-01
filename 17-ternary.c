#include <stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int max = findMax(2324, 3122);
    printf("\nmax = %d\n", max);
    return 0;
}