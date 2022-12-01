
// stack LIFO
traverse(struct node *t)
{
    push(t);
    while (!stackempty())
    {
        t = pop();
        visit(t);
        if (t->r != z)
            push(t->r);
        if (t->l != z)
            push(t->l);
    }
}

// queue FIFO
traverse(struct node *t)
{
    put(t);
    while (!queueempty())
    {
        t = get();
        visit(t);
        if (t->l != z)
            put(t->l);
        if (t->r != z)
            push(t->r);
    }
}