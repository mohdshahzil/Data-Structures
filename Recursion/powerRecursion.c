#include <stdio.h>

#include <stdlib.h>

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return power(m, n - 1) * m;
    }
}

int powerImproved(int p, int q)
{
    if (q == 0)
    {
        return 1;
    }
    else if (q % 2 == 0)
    {
        return powerImproved(p * p, q / 2);
    }
    else
    {
        return p * powerImproved(p * p, (q - 1) / 2);
    }
}

int main()
{
    printf("%d\n", power(2, 5));
    printf("%d", powerImproved(2, 5));

    return 0;
}