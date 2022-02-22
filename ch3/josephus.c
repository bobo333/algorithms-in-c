#include <stdlib.h>
#include <stdio.h>

struct node {
    int key;
    struct node *next;
};

int main() {

    int i, N, M;
    struct node *t, *x;
    scanf("%d %d", &N, &M);

    // build first node, x points at first node
    t = (struct node *) malloc(sizeof(*t));
    t->key = 1;
    x = t;

    // build the rest of the list of nodes
    for (i = 2; i <= N; i++) {
        t->next = (struct node *) malloc(sizeof(*t));
        t = t->next;
        t->key = i;
    }

    // last node loops back to beginning of list
    t->next = x;

    // go until we only have 1 node left
    while (t != t->next) {

        // skip forward M-1 nodes and delete the next one
        for (i = 1; i < M; i++) {
            t = t->next;
        }
        printf("%d ", t->next->key);
        x = t->next;
        t->next = t->next->next;
        free(x);
    }

    printf("%d\n", t->key);


    return 0;
}
