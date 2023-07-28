#include <stdio.h>

#include <stdlib.h>

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int main()
{
    printf("%d", sum(5));

    return 0;
}