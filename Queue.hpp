#ifndef NEWASSIGNMENT1_QUEUE_HPP
#define NEWASSIGNMENT1_QUEUE_HPP
#include "Cell.hpp"


class Queue {
    Cell *front;
    Cell *rear;
public:
    Queue();
    int dequeue();
    Cell * enqueue(int value);

    void makenull();
    bool empty();
    Queue clone();
    Cell* getFront();
    ~Queue();
};


#endif //NEWASSIGNMENT1_QUEUE_HPP
