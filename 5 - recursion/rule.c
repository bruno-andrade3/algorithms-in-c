rule(int l, int r, int h)
{
    int m = (l + r) / 2;
    if (h > 0)
    {
        mark(m, h);
        rule(l, m, h - 1);
        rule(m, r, h - 1);
    }
}

rule(int l, int r, int h)
{
    int i, j, t;
    for (i = 1, j = 1; i <= h; i++, j += j)
        for (t = 0; t <= (l + r) / j; t++)
            mark(l + j + t * (j + j), i);
}