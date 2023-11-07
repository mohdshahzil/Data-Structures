#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first1 = NULL, *first2 = NULL;

void createList1(int A[], int n)
{
    struct Node *t, *last;
    first1 = new Node;
    first1->data = A[0];
    first1->next = NULL;
    last = first1;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void createList2(int A[], int n)
{
    struct Node *t, *last;
    first2 = new Node;
    first2->data = A[0];
    first2->next = NULL;
    last = first2;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void concatenateLists(struct Node *list1, struct Node *list2)
{
    if (list1 == NULL)
    {
        list1 = list2;
    }
    else
    {
        struct Node *temp = list1;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = list2;
    }
}

int main()
{
    int A1[] = {3, 5, 7};
    int A2[] = {10, 15, 20};

    createList1(A1, 3);
    createList2(A2, 3);

    cout << "List 1: ";
    display(first1);

    cout << "List 2: ";
    display(first2);

    concatenateLists(first1, first2);

    cout << "Concatenated List: ";
    display(first1);

    return 0;
}
