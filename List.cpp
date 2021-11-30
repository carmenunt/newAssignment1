#include <iostream>
#include "List.hpp"

List::List()
{
    head = nullptr;
    tail = nullptr;
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

Cell* List::getHead()
{
    return head;
}

int List::getLength()
{
    int counter = 0;
    if (head == nullptr)
    {
        return 0;
    }
    Cell* temp = head;
    while (temp != tail)
    {
        counter++;
        temp = temp->next;
    }
    return ++counter;
}

Cell* List::getTail()
{
    //while (cur != NULL && cur->next != NULL)
    //        cur = cur->next;
    //    return cur;
    return tail;
}

void List::insert(int value)
{
    Cell *newCell = new Cell;
    newCell->value = value;
    newCell->next = nullptr;
    if(head == nullptr)
    {
        head = newCell;
        tail = newCell;
    }
    else
    {
        tail->next = newCell;
        tail = tail->next;
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
    while (head != tail)
    {
        delete1(head);
    }
    head = nullptr;
    tail = nullptr;

}

bool List::empty()
{
    if(head == nullptr && tail == nullptr)
    {
        return true;
    }
    return false;
}

void List::display()
{
    Cell *tmp;
    tmp = head;
    while (tmp != nullptr)
    {
        std::cout << tmp->value << std::endl;
        tmp = tmp->next;
    }
}

List List::clone()
{
    Cell* temp = head;
    List clonedList;
    while (temp != nullptr)
    {
        clonedList.insert(temp->value);
        temp = temp->next;
    }
    return clonedList;
}
List::~List()
{

}

//int main()
//{
//    List newList;
//    newList.insert(1);
//    newList.insert(2);
//    newList.insert(2);
//    newList.insert(2);
//    std::cout << newList.getLength() << std::endl;
//}