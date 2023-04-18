#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int deleteAtStart(int arr[], int size) {
    int i, delelm;
    delelm = arr[0];
    for (i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return delelm;
}

int deleteAtMiddle(int arr[], int size, int pos) {
    int i, delelm;
    if (pos < 1 || pos >= size) {
        printf("Invalid position!\n");
        return -1;
    }
    delelm = arr[pos];
    for (i = pos; i < size-1; i++) {
        arr[i] = arr[i + 1];
    }
    return delelm;
}

int deleteAtEnd(int arr[], int size) {
    int delelm;
    delelm = arr[size - 1];
    return delelm;
}

int main() {
    int arr[MAX_SIZE], size, choice, pos, i, deleted;
    
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("There are three operations : \n");
    printf("1.Delete at the Beginning \n 2.Delete at any position \n 3.Delete at the End \n  ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            deleted = deleteAtStart(arr, size);
            size--;
            break;
            
        case 2:
            printf("Enter the position to delete at the middle: ");
            scanf("%d", &pos);
            deleted = deleteAtMiddle(arr, size, pos);
            if (deleted != -1) {
                size--;
            }
            break;
            
        case 3:
            deleted = deleteAtEnd(arr, size);
            size--;
            break;
            
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    
    printf("Deleted element: %d\n", deleted);
    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
