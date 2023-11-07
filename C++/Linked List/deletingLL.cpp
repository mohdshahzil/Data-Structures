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
    cout << "Linked List Created Successfully" << endl;
}

void display(struct Node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int count(struct Node *p)
{
    int c = 0;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }

    return c;
}

int Delete(struct Node *p, int index)
{
    if (index < 1 || index > count(p))
    {
        return -1;
    }

    if (index == 1)
    {
        struct Node *q;
        q = first;
        first = first->next;
        int x = q->data;
        delete q;
        return x;
    }
    else
    {
        struct Node *q = NULL;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        int x = p->data;
        delete p;
        return x;
    }
}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    create(A, 5);
    display(first);
    cout << endl;
    Delete(first, 1);
    display(first);
}