#include <stdio.h>

#include "euclids.h"

typedef struct Fraction {
    int num;
    int den;
} Fraction;

int main() {

    Fraction initial;
    Fraction reduced;
    int divisor;

    while (scanf("%d/%d", &initial.num, &initial.den) != EOF) {

        divisor = gcd(initial.num, initial.den);
        reduced.num = initial.num / divisor;
        reduced.den = initial.den / divisor;

        printf("%d/%d = %d/%d\n", initial.num, initial.den, reduced.num, reduced.den);
    }

    return 0;
}
