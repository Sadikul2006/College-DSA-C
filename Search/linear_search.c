#include<stdio.h>
int linearSearch(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 7, 3, 8, 5, 9}, target;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the element to search : ");
    scanf("%d", &target);

    int result = linearSearch(arr, n, target);

    if(result != -1) {
        printf("Element found at index %d\n", result);
    }else {
        printf("Element not found\n");
    }
    return 0;
}