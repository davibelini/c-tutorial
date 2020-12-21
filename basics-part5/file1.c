#include <stdio.h>

int main() {
    int eggs;
    scanf("%i", &eggs);
    float dozen = (float)eggs / 12; // type-casting
    printf("You have %f dozen eggs.\n", dozen);
    return 0;
}