#include <stdio.h>
#include "LinkedList.h"


// Default constructor
LinkedList* createLinkedList() {
    // Manually allocate memory for the LinkedList constructor
    LinkedList* list = (LinkedList*) malloc(sizeof(LinkedList));

    return list;
};

// constructor with a parameter
LinkedList* createLinkedList(int val) {
    LinkedList* list = createLinkedList();
    list->head = (Node*) malloc(sizeof(Node));
    list->head->val = val;

    return list;
};

// A function to add an node to the list
void add_first(LinkedList* list, int val) {
    if (list->head == NULL) {
        list->head = (Node*) malloc(sizeof(Node));
        list->head->val = val;
        
    } else {
        Node* curr = list->head;
        while (curr->next != NULL) curr = curr->next;

        curr->next = (Node*) malloc(sizeof(Node));
        curr->next->val = val;
    }
};

int main() {



    return 0;
}