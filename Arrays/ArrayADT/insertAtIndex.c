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

void Insert(struct Array *arr, int index, int element)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = element;
        arr->length++;
    }
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 20, 5};
    Insert(&arr, 2, 65);
    Display(arr);
    return 0;
}