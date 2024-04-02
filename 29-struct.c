#include <stdio.h>
#include <string.h>

struct Player {
    char name[12];
    int score;
};

int main() {

    struct Player player1;
    struct Player player2;

    // player1
    strcpy(player1.name, "Bro");
    player1.score = 4;

    // player2
    strcpy(player2.name, "Code");
    player2.score = 5;

    printf("===== Player 1 =====\n");
    printf("Name: %s\n", player1.name);
    printf("Score: %d\n", player1.score);

    printf("===== Player 2 =====\n");
    printf("Name: %s\n", player2.name);
    printf("Score: %d\n", player2.score);


    return 0;
}