star(int x, int y, int r)
{
    if (r > 0)
    {
        star(x - r, y + r, r / 2);
        star(x + r, y + r, r / 2);
        star(x - r, y - r, r / 2);
        star(x + r, y - r, r / 2);
        box(x, y, r);
    }
}