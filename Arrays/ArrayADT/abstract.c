#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("Elements are: \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    Display(arr);
    return 0;
}