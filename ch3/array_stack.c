

#define MAX 100

int stack[MAX+1], p;

void push(int v) {
    stack[p++] = v;
}

int pop() {
    return stack[--p];
}

void stackinit() {
    p = 0;
}

int stackempty() {
    return p == 0;
}
