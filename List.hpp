#ifndef NEWASSIGNMENT1_LIST_HPP
#define NEWASSIGNMENT1_LIST_HPP
#include "Cell.hpp"

class List {
    Cell *front;
    Cell *back;
public:
    List();
    int delete1(Cell *position);
    void insert(int value);
    void insert(int value, Cell *position);
    Cell* getFront();
    void display();


    void makenull();
    bool empty();

    ~List();
};


#endif //NEWASSIGNMENT1_LIST_HPP
