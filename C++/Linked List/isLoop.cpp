#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

bool isLoop(struct Node *f)
{
    struct Node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q != NULL ? q = q->next : q = NULL;
    }while( p&&q);

    if(p==q)
        return true;
    else
        return false;  

}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    cout << isLoop(first);
    return 0;
}