#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';
    char b[] = "Bro";

    float c = 3.141592653589793;  // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf long float

    bool e = true;         // 1 byte %fd
    char f = 100;          // 1 byte (-128 to +127) %d or %c (ASCII) (decimal or character)
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short int h = 32523;          // 2 bytes (-32,768 to +32, 767) %d - We can ignore the int keyword to specify them
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d - We can ignore the int keyword to specify them

    int j = 2147483647;          // 4 bytes (-2,147,483,648 to +2,147,483,647) %d - Long by default
    unsigned int k = 4294967295; // 4 bytes (0 to +4,294,967,295) %u - Long by default

    long long int l = 9223372036854775807;           // 8 bytes (-9 quintillion to +9 quintilion) %lld
    unsigned long long int m = 18446744073709551615; // 8 bytes (0 to +18 quintilion) %llu

    printf("float: %0.15f\n", c);
    printf("double: %0.15lf\n", d);
    printf("boolean: %d\n", e);
    printf("signed char: %d\n", f);
    printf("signed char (ASCII): %c\n", f);
    printf("unsigned char: %d\n", g);
    printf("unsigned char (ASCII): %c\n", g);
    printf("short int: %d\n", h);
    printf("unsigned short int: %d\n", i);
    printf("signed int: %d\n", j);
    printf("unsigned int: %u\n", k);
    printf("signed long long int: %lld\n", l);
    printf("unsigned long long int: %llu\n", m);

    return 0;
}