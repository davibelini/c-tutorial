#include <stdio.h>

/*
 *
 * Conversion characters:
 * 
 * %f -> Decimal notation
 * %e -> Scientific notation
 * %g -> Let the computer decide
 * 
 *  
*/

int main() {
    printf("How many dogs do you have? ");
    double dogs;
    scanf("%lf", &dogs);
    printf("%f\n%e\n%g", dogs, dogs, dogs);
    return 0;
}