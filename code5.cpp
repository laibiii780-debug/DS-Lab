#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void traverseForward(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void traverseBackward(struct Node* tail) {
    struct Node* temp = tail;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    printf("Forward Traversal: ");
    traverseForward(head);

    printf("Backward Traversal: ");
    traverseBackward(third);

    return 0;
}
