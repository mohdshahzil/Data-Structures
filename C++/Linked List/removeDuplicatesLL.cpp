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
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void removeDuplicate(struct Node *p)
{
    struct Node *q;
    q = p->next;
    while (q != NULL)
    {
        if (p->data == q->data)
        {
            p->next = q->next;
            delete q;
            q = p->next;

        }
        else
        {
            p = q;
            q = q->next;
        }
    }
}

int main()
{
    int A[] = {3, 5, 10, 10, 10, 15, 15, 20};
    create(A, 8);
    display(first);
    cout << endl;
    removeDuplicate(first);
    display(first);
    cout << endl;
    return 0;
}