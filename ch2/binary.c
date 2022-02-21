#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char * binary(int orig) {
    // find size of array

    int num_bits;
    int x = orig;
    for (num_bits = 1; x / 2 > 0; x/=2, num_bits++) {}

    char *result = malloc(sizeof(char) * (num_bits+1));
    result[num_bits] = '\0';

    x = orig;

    for (int i = 0; i < num_bits; i++) {
        if (x & 1) {
            result[num_bits-1 - i] = '1';
        } else {
            result[num_bits-1 - i] = '0';
        }

        x >>= 1;
    }

    return result;
}


int main() {
    int x;

    while (scanf("%d", &x) != EOF) {
        printf("%s\n", binary(x));
    }
}
