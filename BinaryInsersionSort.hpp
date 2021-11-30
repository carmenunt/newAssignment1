#include "List.hpp"
#include "Queue.hpp"
#include "Stack.hpp"

#ifndef NEWASSIGNMENT1_BINARYINSERSIONSORT_HPP
#define NEWASSIGNMENT1_BINARYINSERSIONSORT_HPP


class BinaryInsersionSort {
public:
    List  insertion_sort(List list, int length);
    Queue insertion_sort(Queue queue, int length);
    Stack insertion_sort(Stack stack, int length);

};


#endif //NEWASSIGNMENT1_BINARYINSERSIONSORT_HPP
