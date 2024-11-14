#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort(int array[], int size) {
    int i, j;
    int swapped; 

    for (i = 0; i < size - 1; i++) {
        swapped = 0; 
        for (j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1; 
            }
        }

        
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int array[SIZE] = { 29, 10, 14, 37, 13, 12, 45, 18, 22, 39 };

    printf("Original array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    bubbleSort(array, SIZE);

    printf("Sorted array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}