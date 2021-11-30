#include <cstdio>
#include <cstdlib>
#include "Queue.hpp"

Queue::Queue()
{
    front = nullptr;
    rear = nullptr;
}

int Queue::dequeue()
{
    int removed = 0;
    Cell *temp;

    if(front == nullptr)
        printf("Queue is Empty. Unable to perform dequeue\n");
    else
    {
        removed = front->value;
        temp = front;
        front = front->next;
        if(front == nullptr)
            rear = nullptr;
        //Don't know if we can use it
        free(temp);
    }
    // Need to change something
    return removed;
}

Cell * Queue::enqueue(int value)
{
    Cell* newCell = new Cell;
    newCell->value = value;
    newCell->next = nullptr;
    if(front == nullptr && rear == nullptr)
        front = rear = newCell;
    else
    {
        rear->next = newCell;
        rear = newCell;
    }
}

void Queue::makenull()
{
    while(dequeue() != rear->value)
    {
        dequeue();
    }
    rear = nullptr;
    front = nullptr;
}

bool Queue::empty()
{
 if(rear == nullptr && front == nullptr)
 {
     return true;
 }
    return false;
}

Queue Queue::clone()
{
    Cell* temp = front;
    Queue clonedQueue;
    while (temp != nullptr)
    {
        clonedQueue.enqueue(temp->value);
        temp = temp->next;
    }
}
Queue::~Queue()
{

}