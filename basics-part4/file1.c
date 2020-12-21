#include <stdio.h>

int main() {
    int radius;
    printf("hello, type a radius> ");
    scanf("%i", &radius);
    double area;
    area = 3.14159 * (radius * radius);
    printf("the given radius was %i.\n", radius);
    printf("and the area of a circle with %i of radius is aproximatelly %f!\n", radius, area);
}