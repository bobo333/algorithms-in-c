#include <limits.h>
#include <stdio.h>

#include "euclids.h"


int main() {
    printf("INT_MAX: %d\n", INT_MAX);

    int x, y;

    for (x = INT_MAX; x > 0; x--) {
        for (y = x-1; y > 0; y--) {
            if (gcd(x, y) == 1){
                printf("x: %d, y: %d\n", x, y);
                return 0;
            }
        }
    }

    return 0;
}
