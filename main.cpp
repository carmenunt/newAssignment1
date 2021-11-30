#include <iostream>
#include <ctime>
#include "Stack.hpp"
#include "List.hpp"
#include "Queue.hpp"
#include "Equations.hpp"
#include "BinaryInsersionSort.hpp"
#include "Quicksort.hpp"

using namespace std;

int main() {

    int A, B;
    int counter = 0;
    Stack newStack;
    List newList;
    Queue newQueue;

    while(counter < 1000)
    {
//        cout << "\nPlease enter integer A: ";
//        cin >> A;
//        cout << "\nPlease enter integer B: ";
//        cin >> B;
        srand( time(0) );
        A = rand() % 100 + 1;
        B = rand() % 100 + 1;
        cout << "\nA = " << A;
        cout << "\nB = " << B;
        int nr;
        Equations newObj;
        nr = newObj.equation(B);
        cout << "\nFB = " << nr << endl;
        if(nr > 0)
        {
            counter += nr;
            newObj.numberGenerator(nr, A, newStack, newList, newQueue);
        }

        // It will print out the generated numbers in the function numberGeneration()
    }
    int choice = 0;
    while (choice !=5)
    {
        cout << "\n1. Sorting algorithms\n2. Search algorithm\n3. Add data number\n4. Remove data number\n5. Exit\nPlease enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                BinaryInsersionSort newSort1;
                newSort1.insertion_sort(newList, counter);
                newSort1.insertion_sort(newStack, counter);
                newSort1.insertion_sort(newQueue, counter);
                Quicksort newSort2;
                newSort2.quickSort(newList.getHead());
                newSort2.quickSort(newStack.topElement());
                newSort2.quickSort(newQueue.getFront());
            case 2:
                //searching
            case 3:
                //adding data
                int newValue;
                cout << "Enter a number" << endl;
                cin >> newValue;
                newList.insert(newValue);
                newQueue.enqueue(newValue);
                newStack.push(newValue);
            case 4:
                //removing data
            case 5:
                break;
        }


    }

    return 0;


}