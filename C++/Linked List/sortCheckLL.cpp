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

bool checkSort(struct Node *p)
{
    int x = -65536;
    while (p != NULL)
    {
        if (p->data < x)
        {
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}

int main()
{
    int A[] = {3, 5, 10, 7, 15};
    create(A, 5);
    display(first);
    cout << endl;
    cout << checkSort(first);
    return 0;
}