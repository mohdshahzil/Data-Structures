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
    st->S=new int[st->size];
    cout<<"Stack created Successfully"<<endl;
}

void push(struct Stack *st,int x){
    if (st->top==st->size-1){
        cout<<"Stack Overflow"<<endl;
    }
    else{
        st->top++;
        st->S[st->top] = x;
    }
    cout<<"Element Added Successfully"<<endl;
}



int main(){
    struct Stack st;
    create(&st);
    int iterations=st.size;
    for(int i=0;i<iterations;i++){
        int ele;
        cout<<"Enter the element  :";
        cin>>ele;
        push(&st,ele);
    }
    return 0;
}