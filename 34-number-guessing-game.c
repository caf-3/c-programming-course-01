#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const int MIN = 1;
    const int MAX = 100;
    int answer;
    int guesses;
    int guess;

    srand(time(0));

    answer = (rand() % MAX) + MIN;
    
    do{
        printf("Enter a guess:");
        scanf("%d", &guess);

        if(guess < answer) {
            printf("Too low!\n");
        }else if(guess > answer){
            printf("Too high!\n");
        }else {
            printf("CORRECT!\n");
        }
        guesses++;

    }while (guess != answer);

    printf("\n*******************\n");
    printf("ANSWER: %d\n", answer);
    printf("GUESSES: %d\n", guesses);
    printf("*******************\n");

    return 0;
}