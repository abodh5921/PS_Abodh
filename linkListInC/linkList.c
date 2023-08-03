#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** currentHead, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *currentHead;
    *currentHead = newNode;
    printf("Current head: %d\n", (*currentHead)->data);
}

// Function to delete a node with a given key from the linked list
void deleteNode(struct Node** currentHead, int key) {
    struct Node* temp = *currentHead;
    struct Node* prev = NULL;
    if (temp != NULL && temp->data == key) {
        *currentHead = temp->next;
        free(temp);
    } else {
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Key not found in the linked list.\n");
            return;
        }
        prev->next = temp->next;
        free(temp);
    }
    printf("Current head: %d\n", (*currentHead)->data);
}

// Function to display the linked list
void displayLinkedList(struct Node* currentHead) {
    struct Node* temp = currentHead;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* listHead = NULL;

    insertAtBeginning(&listHead, 5);
    printf("Linked list after inserting node 5 at the beginning: \n");
    displayLinkedList(listHead);

   

    return 0;
}
