#include <stdio.h>

void insertionSort(int array[], int len){
    for (int i = 1; i < len; i++) {
        int j = i;
        while ((j > 0) && (array[j] < array[j-1])) {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
            j--;
        }
    }
}

int main(void) {
    int a[] = {0, 1, 5, 3, 7, 41, 6, 4, 6, 7, 8, 9, 11};
    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

