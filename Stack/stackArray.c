#include <stdio.h>

#include <stdlib.h>

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    printf("Enter size : ");
    scanf("%d", &st->size);
    st->top == -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(struct Stack st)
{

    for (int i = st.top; i >= 0; i--)
    {
        printf("%d ", st.S[i]);
    }
    printf("\n");
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("Stack Overflow");
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
    {
        printf("Invalid Position");
    }
    else
    {
        x = st.S[st.top - pos + 1];
    }
    return x;
}

int stacktop(struct Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
    {
        return st.S[st.top];
    }
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Stack st)
{
    if (st.top == st.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);

    Display(st);

    return 0;
}