#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Node {
    struct Node  *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    struct Node *t,*last;
    first = new Node;
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->prev=last;
        last->next=t;
        t->next=NULL;
        last=t;
    }
}

void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int length(struct Node *p){
    int c=0;
    while(p!=NULL){
        c++;
        p=p->next;
    }
    return c;
}

void Insert(struct Node *p,int index,int x){
    if (index<0 || index>length(p)){\
        return;
    }

    if (index==0){
        struct Node *t;
        t=new Node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        struct Node *t;
        t=new Node;
        t->data=x;
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        t->prev=p;
        t->next=p->next;
        if (p->next!=NULL){
            p->next->prev=t;
        }
        p->next=t;

    }
}

void Delete(struct Node *p,int index){
    struct Node *q;
    if (index<1 || index>length(p)){
        return;
    }

    if (index==1){
        first=first->next;
        if (first){
            first->prev=NULL;
        }
        delete p;

    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        p->prev->next=p->next;
        if (p->next){
            p->next->prev=p->prev;
        }
        delete p;
    }
}

int main(){
    int A[]={10,20,30,40,50};
    create(A,5);
    // display(first);
    // cout<<endl;
    // Insert(first,2,100);
    // display(first);
    display(first);
    Delete(first,1);
    cout<<endl;
    display(first);
    
    return 0;
    
}