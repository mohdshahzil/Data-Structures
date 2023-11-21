#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*Head=NULL;

void create(int A[],int n){
    struct Node *t,*last;
    Head= new Node;
    Head->data=A[0];    
    Head->next=Head;
    last=Head;
    for(int i=1;i<n;i++){
        t= new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;

    }
}

void display(struct Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=Head);
    cout<<endl;
}

int length(struct Node *p)
{
 int len=0;
 do
 {
 len++;
 p=p->next;

 }while(p!=Head);
 return len;
}

void Delete(struct Node *p,int index){
    if (index<0 || index>length(p)){
        return;
    }

    if (index==1){
        while(p->next!=Head){
            p=p->next;
        }
        if (Head==p){
            delete Head;
            Head=NULL;
        }
        else{
            p->next=Head->next;
            delete Head;
            Head=p->next;
        }
    }
    else{
        struct Node *q;
        for(int i=0;i<index-2;i++){
            p=p->next;

        }
        q=p->next;
        p->next=q->next;
        delete q;

    }
}



int main(){
    int A[]={2,3,4,5,6};
    create(A,5);
    display(Head);
    Delete(Head,1);
    display(Head);
    return 0;
    
}