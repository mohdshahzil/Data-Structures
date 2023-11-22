#include <iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st){
    cout<<"Enter the size : ";
    cin>>st->size;
    st->top=-1;
    st->S = new int[st->size];
    cout<<"Stack Created "<<endl;
}

void push(struct Stack *st,int x){
    if (st->top==st->size-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        st->top++;
        st->S[st->top] = x;
    }
    
}

int pop(struct Stack *st){
    int x=-1;
    if (st->top==-1){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

int main(){
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    cout<<pop(&st);
    
    
    return 0;
}