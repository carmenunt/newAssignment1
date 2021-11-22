#include "Equations.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

Equations::Equations()
{
}

int Equations::equation(int B)
{
    srand( time(0) ); //Randomize seed initialization
    int final = 0;

    final = (B * 500 * (rand() % 2)) + (4000 * (rand() % 2)) - (6000 * (rand() % 2));
    return final;

}

void Equations::numberGenerator(int p_FB, int A, Stack newStack, List newList, Queue newQueue)
{

    int i = 0,number;
    while(i < p_FB)
    {

        number = A +(1000*i) - (1000 * i * (rand() % 2));
        newStack.push(number);
        newQueue.enqueue(number);
        newList.insert(number);
        cout << number << " ";
        i++;
    }
}



Equations::~Equations()
{
}




