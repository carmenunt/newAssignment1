#include "Quicksort.hpp"
#include "Cell.hpp"
#include <iostream>
#include <cstdio>
using namespace std;


void insertAtBeginning(Cell**head,int dataToBeInserted)
{
    Cell*curr=new Cell;
    //make a new LLNode with this data and next pointing to NULL
    curr->value=dataToBeInserted;
    curr->next= nullptr;
    if(*head== nullptr) //if list is empty then set the current formed LLNode as head of list
        *head=curr;

    else //make the next of the current LLNode point to the present head and make the current LLNode as the new head
    {
        curr->next=*head;
        *head=curr;
    }

    //O(1) constant time
}

// A utility function to print linked list //
void display(Cell**head)
{
    Cell*temp=*head;
    while(temp!= nullptr) //till the list ends (NULL marks ending of list)
    {
        if(temp->next!= nullptr)
            cout<<temp->value<<" ->";
        else
            cout<<temp->value;

        temp=temp->next; //move to next node
    }
    //O(number of nodes)
    cout<<endl;
}


// Partitions the list taking the last element as the pivot
Cell *partition(Cell *head, Cell *end, Cell **newHead, Cell **newEnd)
{
    Cell *pivot = end;
    Cell *prev = nullptr, *cur = head, *tail = pivot;

    // During partition, both the head and end of the list might change
    // which is updated in the newHead and newEnd variables
    while (cur != pivot)
    {
        if (cur->value < pivot->value)
        {
            // First node that has a value less than the pivot - becomes
            // the new head
            if ((*newHead) == nullptr)
                (*newHead) = cur;

            prev = cur;
            cur = cur->next;
        }
        else // If cur LLNode is greater than pivot
        {
            // Move cur LLNode to next of tail, and change tail
            if (prev)
                prev->next = cur->next;
            Cell *tmp = cur->next;
            cur->next = nullptr;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }

    // If the pivot data is the smallest element in the current list,
    // pivot becomes the head
    if ((*newHead) == nullptr)
        (*newHead) = pivot;

    // Update newEnd to the current last node
    (*newEnd) = tail;

    // Return the pivot LLNode
    return pivot;
}


//here the sorting happens exclusive of the end node
Cell *quickSortRecur(Cell *head, Cell *end)
{
    // base condition
    if (!head || head == end)
        return head;

    Cell *newHead = nullptr, *newEnd = nullptr;

    // Partition the list, newHead and newEnd will be updated
    // by the partition function
    Cell *pivot = partition(head, end, &newHead, &newEnd);

    // If pivot is the smallest element - no need to recur for
    // the left part.
    if (newHead != pivot)
    {
        // Set the LLNode before the pivot LLNode as NULL
        Cell *tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = nullptr;

        // Recur for the list before pivot
        newHead = quickSortRecur(newHead, tmp);

        // Change next of last LLNode of the left half to pivot
        tmp = getTail(newHead);
        tmp->next =  pivot;
    }

    // Recur for the list after the pivot element
    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
}

// The main function for quick sort. This is a wrapper over recursive
// function quickSortRecur()
void quickSort(Cell **headRef)
{
    (*headRef) = quickSortRecur(*headRef, getTail(*headRef));
    return;
}

// Driver program to test above functions
//int main()
//{
//    Cell *head = NULL;
//    LLNode *tail = NULL;
//    insertAtBeginning(&head, 6);
//    insertAtBeginning(&head, 16);
//    insertAtBeginning(&head, 15);
//    insertAtBeginning(&head, 50);
//    insertAtBeginning(&head, 1);
//    insertAtBeginning(&head, 23);
//
//    cout << "Linked List before sorting \n";
//    display(&head);
//
//    quickSort(&head);
//
//    cout << "Linked List after sorting \n";
//    display(&head);
//
//    return 0;
//}