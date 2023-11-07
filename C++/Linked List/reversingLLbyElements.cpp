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

void reversingLL(struct Node *p)
{
    int i = 0;
    int count = 0;
    struct Node *temp = p;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    int *array = new int[count];
    while (p != NULL)
    {
        array[i] = p->data;
        p = p->next;
        i++;
    }
    i--;
    p = first;
    while (p != NULL)
    {
        p->data = array[i];
        i--;
        p = p->next;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    cout << endl;
    reversingLL(first);
    display(first);
    return 0;
}