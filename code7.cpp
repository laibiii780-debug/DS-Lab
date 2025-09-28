#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createCircle(int n) {
    struct Node* head = NULL;
    struct Node* prev = NULL;

    for (int i = 1; i <= n; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        if (head == NULL) {
            head = newNode;
            newNode->next = head;
        } else {
            newNode->next = head;
            prev->next = newNode;
        }
        prev = newNode;
    }
    return head;
}

int josephus(int n, int m) {
    struct Node* head = createCircle(n);
    struct Node* prev = NULL;
    struct Node* curr = head;

    while (curr->next != curr) {
        for (int count = 1; count < m; count++) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        free(curr);
        curr = prev->next;
    }
    int survivor = curr->data;
    free(curr);
    return survivor;
}

int main() {
    int n = 7, m = 3;
    printf("Survivor is: %d\n", josephus(n, m));
    return 0;
}
