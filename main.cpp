#include <iostream>
#include "Stack.hpp"
#include "List.hpp"
#include "Queue.hpp"
#include "Equations.hpp"

using namespace std;

int main() {

    int A, B;
    int counter = 0;
    Stack newStack;
    List newList;
    Queue newQueue;

    while(counter < 100000)
    {
        cout << "\nPlease enter integer A: ";
        cin >> A;
        cout << "\nPlease enter integer B: ";
        cin >> B;
        cout << "\nA = " << A;
        cout << "\nB = " << B;
        int nr;
        Equations newObj;
        nr = newObj.equation(B);
        cout << "\nFB = " << nr << endl;
        A = 5;
        nr = 10;
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
        cout << "\n1. Sorting algorithms\n2. Search algorithm\n 3. Add data number\n4. Remove data number\n5. Exit\nPlease enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                //sorting
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
                exit;
        }


    }

    return 0;


}