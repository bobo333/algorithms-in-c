#include <stdio.h>

// #include "pushdown_stacks.h"
#include "array_stack.h"

char c; 

int main() {
    for (stackinit(); scanf("%1s", &c) != EOF; ) {

        if (c == ')') printf("%1c", (char) pop());
        if (c == '+') push((int) c);
        if (c == '*') push((int) c);

        while (c >= '0' && c <= '9') {
            printf("%1c", c);
            scanf("%1c", &c);
        }

        if (c != '(') printf(" ");
    }

    while ( !stackempty() ) {
        printf("%1c", (char) pop());
    }

    printf("\n");

    return 0;
}
