#include <stdio.h>

#include "euclids.h"

int main() {

    int x, y, z;
    while (scanf("%d %d %d", &x, &y, &z) != EOF) {
        printf("%d %d %d gcd: %d\n", x, y, z, gcd(x, gcd(y, z)));
    }

    return 0;
}

