#ifndef NEWASSIGNMENT1_EQUATIONS_HPP
#define NEWASSIGNMENT1_EQUATIONS_HPP
#include "Stack.hpp"
#include "Queue.hpp"
#include "List.hpp"


class Equations {
public:
    Equations();
    int equation(int B);
    void numberGenerator(int p_FB, int A, Stack newStack, List newList, Queue newQueue);
    ~Equations();
};


#endif //NEWASSIGNMENT1_EQUATIONS_HPP
