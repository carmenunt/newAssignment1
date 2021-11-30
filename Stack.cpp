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
    if (top == nullptr)
    {
        std::cout << ("\n Error : Trying to pop from empty stack");
        // Need to do something here
        return -1;
    }
    else
    {
        Cell* temp = top;
        top = top->next;
//        free(temp);
        popped = temp->value;
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

Cell * Stack::topElement()
{
    return(top);
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

Stack Stack::clone()
{
    Cell* temp = top;
    Stack clonedStack;
    while (temp != nullptr)
    {
        clonedStack.push(temp->value);
        temp = temp->next;
    }
}

Stack::~Stack()
{

}
