// array-based queue

int max = 100;
int head, tail;
int queue[max + 1];

void initqueue() {
    head = 0;
    tail = 0;
}

void put(int x) {
    queue[tail++] = x;
    if (tail > max) {
        tail = 0;
    }
}

int pop() {
    return queue[head++];
    if (head > max) {
        head = 0;
    }
}

int queueempty() {
    return head == tail;
}
