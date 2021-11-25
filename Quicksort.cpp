#include <iostream>
#include "Quicksort.hpp"
using namespace std;


Cell* Quicksort::getEnd(Cell* current)
{
    while (current != nullptr && current->next != nullptr)
    {
        current = current->next;
    }
    return current;
}

void Quicksort::displayQuicksort(Cell **head)
{
    Cell*temp=*head;
    while(temp!= nullptr) //till the list ends (NULL marks ending of list)
    {
        if(temp->next!= nullptr)
        {
            cout<<temp->value<<" ->";
        }else
        {
            cout<<temp->value;
        }
        temp=temp->next; //move to next node
    }
}

Cell* Quicksort::partition(Cell *head, Cell *end, Cell **newHead, Cell **newEnd)
{
    Cell *pivot = end;
    Cell *prev = nullptr;
    Cell *current = head;
    Cell *tail = pivot;
    // During partition, both the head and end of the list might change
    // which is updated in the newHead and newEnd variables
    while (current != pivot)
    {
        if (current->value < pivot->value)
        {
            if ((*newHead) == nullptr)
            {
                (*newHead) = current;
            }
            prev = current;
            current = current->next;
        }
        else
        {
            if (prev)
            {
                prev->next = current->next;
            }
            Cell *temporary = current->next;
            current->next = nullptr;
            tail->next = current;
            tail = current;
            current = temporary;
        }
    }
    if (*newHead == nullptr)
    {
        *newHead = pivot;
    }
    *newEnd = tail;
    return pivot;
}

//here the sorting happens exclusive of the end node
Cell* Quicksort::quickSortRecur(Cell *head, Cell *end)
{
    // base condition
    if (!head || head == end)
    {
        return head;
    }
    Cell *newHead = nullptr, *newEnd = nullptr;
    // Partition the list, newHead and newEnd will be updated
    // by the partition function
    Cell *pivot = partition(head, end, &newHead, &newEnd);
    // If pivot is the smallest element - no need to recur for
    // the left part.
    if (newHead != pivot)
    {
        Cell *tmp = newHead;
        while (tmp->next != pivot)
        {
            tmp = tmp->next;
        }
        tmp->next = nullptr;
        // Recur for the list before pivot
        newHead = quickSortRecur(newHead, tmp);

        // Change next of last LLNode of the left half to pivot
        tmp = getEnd(newHead); // Changing the next of
        tmp->next =  pivot;
    }

    // Recur for the list after the pivot element
    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
}

// The main function for quick sort. This is a wrapper over recursive
// function quickSortRecur()
void Quicksort::quickSort(Cell **headRef)
{
    (*headRef) = quickSortRecur(*headRef, getEnd(*headRef));
}

int main()
{
    Cell *head = nullptr;
    Cell *tail = nullptr;
    List
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 16);
    insertAtBeginning(&head, 15);
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 23);

    cout << "Linked List before sorting \n";
    display(&head);

    quickSort(&head);

    cout << "Linked List after sorting \n";
    display(&head);

    return 0;
}