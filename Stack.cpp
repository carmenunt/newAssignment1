#include <cstdio>
#include <iostream>
#include "Stack.hpp"

Stack::Stack()
{
    top = nullptr;
    top1 = nullptr;
}

int Stack::pop()
{
    int popped;

    top1 = top;
    if (top1 == nullptr)
    {
        std::cout << ("\n Error : Trying to pop from empty stack");
        // Need to do something here
        return -1;
    }
    else
    {
        top1 = top1->next;
        free(top);
        top = top1;
        popped = top->value;
    }

    return popped;
}

void Stack::push(int value)
{

    Cell* temp = new Cell;
    temp->value = value;
    temp->next = top;
    top = temp;
}

void Stack::makenull()
{
    while(pop() != top->value)
    {
        pop();
    }
    top = nullptr;
}

bool Stack::empty()
{
    if(top== nullptr)
    {
        return true;
    }
    return false;
}

int Stack::topElement()
{
    return(top->value);
}

void Stack::display()
{
    top1 = top;
    if (top1 == nullptr)
    {
        std::cout << ("Stack is empty");
        return;
    }
    while (top1 != nullptr)
    {
        printf("%d ", top1->value);
        top1 = top1->next;
    }
}

Stack::~Stack()
{

}
