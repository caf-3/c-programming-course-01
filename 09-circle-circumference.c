#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("\ncircumference: %lf (m)", circumference);
    printf("\narea: %lf (m^2)", area);
    printf("\n");

    return 0;
}