#ifndef NEWASSIGNMENT1_STACK_HPP
#define NEWASSIGNMENT1_STACK_HPP
#include "Cell.hpp"

class Stack {
    Cell *top;
    Cell *top1;
public:
    Stack();
    int pop();
    void push(int value);
    Cell * topElement();
    void makenull();
    bool empty();
    void display();
    Stack clone();
    ~Stack();
};


#endif //NEWASSIGNMENT1_STACK_HPP
