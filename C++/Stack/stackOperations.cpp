#include<iostream>
using namespace std;
struct Stack{
    int size;
    int top;
    int *S;
};

void create(Stack *st){
    cout<<"Enter size: ";
    cin>>st->size;
    st->top=-1;
    st->S = new int[st->size];
    cout<<"Stack created Successfully!"<<endl;
}



int main(){
    struct Stack st;
    create(&st);
    return 0;
}
