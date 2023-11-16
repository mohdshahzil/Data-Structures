#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void createCircularLL(int A[], int n)
{
    struct Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    createCircularLL(A, 5);
    display(head);
    return 0;

}