# include "stack.h"

Stack::Stack()
{
        top=-1;
}

void Stack::push(int value)
{
    _stack[++top] = value;
}

int Stack::pop()
{
    return _stack[top--];
}