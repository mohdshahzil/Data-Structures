#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n){
    struct Node *t,*last;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
    cout<<"LL created successfully"<<endl;
}

int search(struct Node *p,int key){
    while(p!=NULL){
        if(key==p->data){
            return p->data;
        }
        p=p->next;
    }
    
    return -1;
}

int main(){
    int A[5]={1,2,3,4,5};
    create(A,5);
    cout<<search(first,0);
  
}