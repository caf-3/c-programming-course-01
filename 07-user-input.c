#include <stdio.h>
#include <string.h>

int main()
{
    int age;
    char name[25]; // bytes

    printf("\nWhat's your name ?:\n");
    // scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    printf("\nHow old are you?\n");
    // getting rid of enter
    scanf("%d", &age);
    printf("\nHello %s", name);
    printf("\nYou are %d years old\n", age);

    return 0;
}