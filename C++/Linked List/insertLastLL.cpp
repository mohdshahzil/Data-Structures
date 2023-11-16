#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Node {
    int data;
    struct Node *next;
} *first = NULL, *last = NULL;

void create(int A[], int n) {
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
    cout << "LL created successfully" << endl;
}

void display(struct Node *p) {
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
}

void insertLast(int x) {
    struct Node *t;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == NULL) {
        first = last = t;
    } else {
        last->next = t;
        last = t;
    }
}

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    create(A, 5);
    display(first);
    cout << endl;
    insertLast(6);
    display(first);

    return 0;
}
