#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Bro";
    char string2[] = "Code";

    // strlwr(string1);
    // strupr(string1);
    // strcat(string1, string2);
    // strncat(string1, string2, 1);
    // strcpy(string1, string2);
    // strncpy(string1, string2, 4);
    // strset(string1, '?');
    // strnset(string1, 'x', 1);
    strrev(string1);

    int result = strlen(string1);
    int result = strcmp(string1, string2);
    int result = strncmp(string1, string2, 1);
    int result = strcmpi(string1, string1);
    int result = strnicmp(string1, string2, 1);
    print("\n%s\n", string1);

    return 0;
}