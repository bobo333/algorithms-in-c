#include <stdio.h>

int josephus(int m, int n) {

    // create array of m values
    int vals[m];
    for (int i = 0; i < m; i++) {
        vals[i] = 1;
    }

    // create counter of remaining values
    int remaining = m;

    // create index to current (start at 0)
    int index = 0;


    while (remaining > 1) {
        for (int j = 0; j < n - 1; ) {
            if (vals[index] == 1) {
                j++;
            }

            if (index >= m) {
                index = 0;
            } else {
                index++;
            }
        }

        // find next non-0 and delete
        while (vals[index] == 0) {
            index++;
            if (index > m) {
                index = 0;
            }
        }

        printf("deleting %d\n", index + 1);
        vals[index] = 0;
        remaining--;
    }

    for (int i = 0; i < n; i++) {
        if (vals[i] == 1) {
            printf("last standing: %d\n", i + 1);
        }
    }
}

int main() {
    josephus(9, 5);

    return 0;
}
