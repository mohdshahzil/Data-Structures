#include <stdio.h>

#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int min(struct Node *p)
{
    int minimum = INT_MAX;
    while (p != NULL)
    {
        if (p->data < minimum)
        {
            minimum = p->data;
        }
        p = p->next;
    }
    return minimum;
}

int main()
{
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    printf("%d", min(first));

    return 0;
}