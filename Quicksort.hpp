#ifndef NEWASSIGNMENT1_QUICKSORT_HPP
#define NEWASSIGNMENT1_QUICKSORT_HPP


#include "Cell.hpp"

class Quicksort {
public:
    Cell* getEnd(Cell* current);
    Cell *partition(Cell *head, Cell *end, Cell **newHead, Cell **newEnd);
    Cell *quickSortRecur(Cell *head, Cell *end);
    void quickSort(Cell **headRef);
    void displayQuicksort(Cell **head);
};


#endif //NEWASSIGNMENT1_QUICKSORT_HPP
