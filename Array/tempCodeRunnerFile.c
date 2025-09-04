#include<stdio.h>
int main(){
    int n = 0, arr[n], temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("Enter the array elements index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Current Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    for(int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
    printf("\nReverse Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
