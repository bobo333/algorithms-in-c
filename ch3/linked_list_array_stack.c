#include <stdio.h>


int keys[100];
int next[100];
int head, tail;
int next_free;

void initll() {
    head = 0;
    tail = 1;
    next_free = 2;
    next[head] = tail;
    next[tail] = tail;
}

void insertafter(int node, int x) {
    keys[next_free] = x;
    next[next_free] = next[node];
    next[node] = next_free;

    next_free++;
}

int deletenext(int node) {
    int val = keys[next[node]];
    next[node] = next[next[node]];
    return val;
}

void initstack() {
    initll();
}

void push(int x) {
    insertafter(head, x);
}

int pop() {
    return deletenext(head);
}

int main() {
    initstack();

    push(1);
    push(2);
    push(3);
    push(4);
    printf("%d\n", pop());
    printf("%d\n", pop());
    push(5);
    printf("%d\n", pop());
    printf("%d\n", pop());

    return 0;
}
