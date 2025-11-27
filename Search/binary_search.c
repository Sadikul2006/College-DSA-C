#include<stdio.h>
int binarySearch(int arr[], int n, int target) {
    int st = 0, end = n-1;
    while(st <= end) {
        int mid = (st+end) / 2;
        if(arr[mid] == target) return mid;

        if(target > arr[mid]) {
            st = mid+1;
        }else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14}, target;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter the element to search : ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if(result != -1) {
        printf("Element found at index %d\n", result);
    }else {
        printf("Element not found!\n");
    }
    return 0;
}