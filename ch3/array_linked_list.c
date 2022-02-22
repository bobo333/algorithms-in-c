

const int max = 5;

// key holds the node values for a given index, next holds the link to the next node for a given index
int key[max+2], next[max+2];

int x, head, z;

void listinitialize() {
    head = 0; z = 1; x = 2;
    next[head] = z; next[z] = z;
}

void deletenext(int t) {
    next[t] = next[next[t]];
}

int insertafter(int v, int t) {
    key[x] = v;
    next[x] = next[t];
    next[t] = x;

    return x++;
}
