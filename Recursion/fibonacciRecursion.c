#include <stdio.h>

#include <stdlib.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

int main()
{
    printf("%d", fibonacci(5));

    return 0;
}