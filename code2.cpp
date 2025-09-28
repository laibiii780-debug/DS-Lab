#include <stdio.h>
using namespace std;

void deleteElement(int arr[], int *n, int pos) {
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];  // shift left
    }
    (*n)--;
}

int main() {
    int arr[100] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Before Deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    deleteElement (arr, &n, 2);  // delete element at index 2

    printf("\nAfter Deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
