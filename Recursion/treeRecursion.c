#include <stdio.h>
#include <stdlib.h>

int fun(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        fun(n - 1);
        fun(n - 1);
    }
}

int main()
{
    int x = 3;
    fun(x);

    return 0;
}