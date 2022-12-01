// how to use arrays to implement linked lists

#define MAX 100

int key[MAX + 2], next[MAX + 2];
int x, head, z;
listinitilize()
{
    head = 0;
    z = 1;
    x = 2;
    next[head] = z;
    next[z] = z;
}

deletenext(int t)
{
    next[t] = next[next[t]];
}

int insertafter(int v, int t)
{
    key[x] = v;
    next[x] = next[t];
    next[t] = x;
    return x++;
}