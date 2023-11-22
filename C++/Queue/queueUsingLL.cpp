#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct Node *t;
    t=new Node;
    if (t==NULL){
        cout<<"Queue is full"<<endl;
    }
    else{
        t->data=x;
        t->next=NULL;
        if (front==NULL){
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
            
        }
    }
}

int dequeue(){
    struct Node *p;
    int x=-1;
    if (front==NULL){
        cout<<"Queue is Empty"<<endl;
        
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        delete p;
    }
    return x;
}


int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout<<dequeue();
    cout<<dequeue();
    cout<<dequeue();
    return 0;
}