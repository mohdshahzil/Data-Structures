#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x){
    struct Node *t;
    t=new Node;
    if(t==NULL){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }
}

void display(){
    struct Node *p;
    p=top;
    while(p){
        cout<<p->data<<endl;
        p=p->next;
    }
    
}

int main(){
    push(10);
    push(20);
    push(30);
    display();
    return 0;
}