#include <iostream>
#include "List.hpp"

List::List()
{
    front = nullptr;
    back = nullptr;
}

int List::delete1(Cell *toDelete)
{
    Cell* temp;
    temp = toDelete->next;
    toDelete->next = temp->next;
    int value = temp->value;
    delete temp;
    return value;
}

Cell* List::getFront()
{
    return front;
}

void List::insert(int value)
{
    Cell *newCell = new Cell;
    newCell->value = value;
    newCell->next = nullptr;
    if(front == nullptr)
    {
        front = newCell;
        back = newCell;
    }
    else
    {
        back->next = newCell;
        back = back->next;
    }
}

void List::insert(int value, Cell *givenCell)
{
    Cell* newCell = new Cell;
    newCell->value = value;
    newCell->next = givenCell->next;
    givenCell->next = newCell;
}

void List::makenull()
{
    while (front != back)
    {
        delete1(front);
    }
    front = nullptr;
    back = nullptr;

}

bool List::empty()
{
    if(front == nullptr && back == nullptr)
    {
        return true;
    }
    return false;
}

void List::display()
{
    Cell *tmp;
    tmp = front;
    while (tmp != nullptr)
    {
        std::cout << tmp->value << std::endl;
        tmp = tmp->next;
    }
}

List::~List()
{

}