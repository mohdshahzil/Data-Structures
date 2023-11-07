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

int linearSearch(struct Node *p, int key)
{
    while (p != NULL)
    {
        if (key == p->data)
        {
            return p->data;
        }
        p = p->next;
    }

    return -1;
}

int main()
{
    int A[5] = {1, 2, 3, 4, 5};
    create(A, 5);
    display(first);
    cout << endl;
    cout << linearSearch(first, 0) << endl;
    return 0;
}