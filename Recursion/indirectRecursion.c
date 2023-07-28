#include <stdio.h>

#include <stdlib.h>
void funB(int n); // function prototype (declaration)
void funA(int n)
{
    if (n > 0)
    {
        printf("%d\n", n);
        funB(n - 1);
    }
}

void funB(int n)
{
    if (n > 1)
    {
        printf("%d\n", n);
        funA(n / 2);
    }
}
int main()
{
    funA(20);

    return 0;
}