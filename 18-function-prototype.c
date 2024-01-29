#include <stdio.h>

void hello(char[], int); // function prototype

int main() {
    char name[] = "Tomás";
    int age = 29;

    hello(name, age);
    return 0;
}

void hello(char name[], int age) {
    printf("\nHello %s", name);
    printf("\nYou are %d years old!\n", age);
}
