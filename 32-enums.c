#include <stdio.h>

enum Day { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };

int main() {

    enum Day today = Sat;

    if(today == Sat || today == Sun) {
        printf("It's weekend. Party time!");
    }else {
        printf("You have to word bro!");
    }

    return 0;
}