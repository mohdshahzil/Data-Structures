#include<iostream>
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

void reverse(struct Node *p,int n){
    p=first;
    int i=0;
    int array[n];
    while(p!=NULL){
        array[i]=p->data;
        i++;
        p=p->next;
    }
    i--;
    p=first;
    while(p!=NULL){
        p->data=array[i];
        i--;
        p=p->next;
    }
}

int main(){
    int A[5]={1,2,3,4,5};
    create(A,5);
    display(first);
    cout<<endl;
    reverse(first,5);
    display(first);
    return 0;
}