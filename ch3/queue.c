// linked-list based queue

#include <stdlib.h>

static struct node {
    int key;
    struct node *next;
}

struct node *head;
struct node *tail;

void initqueue() {
    head = (struct node *) malloc(sizeof(*head));
    tail = (struct node *) malloc(sizeof(*tail));
    head->key = 0;
    tail->next = tail;
    head->next = tail;
}

void push(int x) {
    struct node *new = (struct node *) malloc(sizeof(*new));
    new->key = x;
    new->next = new;
    tail->next = new;
}

int pop() {
    int val;
    struct node *x = head->next;
    val = x->key;
    head->next = head->next->next;
    free(x);
    return val;
}

int queueempty() {
    return head->next == tail;
}
