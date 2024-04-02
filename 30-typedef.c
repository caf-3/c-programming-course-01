#include <stdio.h>

typedef struct {
    char name[25];
    char password[12];
    int id;
} User;

int main() {
    User user1 = { "Bro", "mypassword241", 1234235 };
    User user2 = {"Code", "password1234", 98273423};

    printf("==== User 1 ====\n");
    printf("Id: %d\n", user1.id);
    printf("Name: %s\n", user1.name);
    printf("Password: %s\n", user1.password);

    printf("\n==== User 2 ====\n");
    printf("Id: %d\n", user2.id);
    printf("Name: %s\n", user2.name);
    printf("Password: %s\n", user2.password);

    return 0;
}