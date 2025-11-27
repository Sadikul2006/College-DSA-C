#include<stdio.h>

void selectionSort(int arr[], int n) {
    for(int i=0; i<n; i++) {
        int smallestIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]) {
                smallestIdx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallestIdx];
        arr[smallestIdx] = temp;
    }
}

int main() {
    int arr[] = {5, 4, 1, 2, 0, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
