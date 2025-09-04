// Q.1 insert data any position---->

//  #include<stdio.h>
// int main(){
//     int n = 0, arr[100], val, pos;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     printf("Enter the array elements:\n");
//     for(int i = 0; i < n; i++) {
//         printf("index %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Current Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }

//     printf("\nEnter the position in array for insert data(index no.): ");
//     scanf("%d", &pos);
//     for(int i = n; i > pos; i--) {
//         arr[i] = arr[i-1];
//     }

//     printf("Enter data for array index no. %d: ", pos);
//     scanf("%d", &val);
//     arr[pos] = val;
//     n++;

//     printf("Current Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// Q.2 delete any position----->

// #include<stdio.h>
// int main(){
//     int n = 0, arr[100], val, pos;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     printf("Enter the array elements:\n");
//     for(int i = 0; i < n; i++) {
//         printf("index %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Current Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }

//     printf("\nEnter the position in array for delete data(index no.): ");
//     scanf("%d", &pos);
//     if(pos < 0 || pos > n){
//         printf("Invalid position!\n");
//         return 1;
//     }
//     for(int i = pos; i < n-1; i++) {
//         arr[i] = arr[i+1];
//     }
//     n--;

//     printf("Current Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// Q.3 Reverse Array Element--->

// #include<stdio.h>
// int main(){
//     int n, arr[n], temp;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Enter the array elements index %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Current Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }

//     for(int i = 0; i < n/2; i++) {
//         temp = arr[i];
//         arr[i] = arr[n-i-1];
//         arr[n-i-1] = temp;
//     }

//     printf("\nReverse Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     return 0;
// }

// Q.4 sum of array elements---->

// #include<stdio.h>
// int main(){
//     int n = 0, arr[n], sum = 0;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Enter the array elements index no.%d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     printf("\nSum = %d",sum);
//     return 0;
// }

// Q.5 add two martrics ---->

// #include<stdio.h>
// void create_matrix(int m, int n, int arr[m][n]) {
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             printf("Enter the value of arr[%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }

// void display(int m, int n, int arr[m][n]) {
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void sumMatrix(int m, int n, int arr1[m][n], int arr2[m][n], int sum[m][n]) {
//     for(int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             sum[i][j] = arr1[i][j] + arr2[i][j];
//         }
//     }
// }

// int main() {
//     int m = 0, n = 0;
//     printf("Enter the number of row in matrix: ");
//     scanf("%d", &m);
//     printf("Enter the number of cloumn in matrix: ");
//     scanf("%d", &n);
//     int arr1[m][n], arr2[m][n], sum[m][n];
//     create_matrix(m,n,arr1);
//     printf("Frist matrix:\n");
//     display(m,n,arr1);

//     create_matrix(m,n,arr2);
//     printf("Second matrix:\n");
//     display(m,n,arr2);

//     sumMatrix(m,n,arr1,arr2,sum);
//     printf("Sum of two matrix:\n");
//     display(m,n,sum);
//     return 0;
// }




// Q.6 Tanspose Matrix----->

// #include<stdio.h>
// void display(int m, int n, int arr[m][n]) {
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int m, n;
//     printf("Enter the matrix Row: ");
//     scanf("%d", &m);
//     printf("Enter the matrix Cloumn: ");
//     scanf("%d", &n);
//     int arr[m][n], tanspose[m][n];
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             printf("Enter the value of arr[%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("Matrix:\n");
//     display(m,n,arr);

//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             tanspose[i][j] = arr[j][i];
//         }
//     }

//     printf("Tanspose Matrix: \n");
//     display(m,n,tanspose);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n = 0, arr[n], sum = 0;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Enter the array elements index no.%d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     printf("Array: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d\t", arr[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     printf("\nSum = %d",sum);
//     return 0;
// }


// Q.7 product of two matrix--->

// #include <stdio.h>
// void create_matrix(int r, int c, int arr[r][c]) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             printf("Enter value of arr[%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
// }

// void display(int r, int c, int arr[r][c]) {
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             printf("%d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void multiply(int m, int p, int n, int arr1[m][p], int arr2[p][n], int result[m][n]) {
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             result[i][j] = 0;
//             for (int k = 0; k < p; k++) {
//                 result[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }
// }

// int main() {
//     int m, p, n;
//     printf("Enter number of rows for first matrix (m): ");
//     scanf("%d", &m);
//     printf("Enter number of columns for first matrix / rows for second matrix (p): ");
//     scanf("%d", &p);
//     printf("Enter number of columns for second matrix (n): ");
//     scanf("%d", &n);

//     int arr1[m][p], arr2[p][n], result[m][n];

//     printf("\nEnter elements for first matrix (%dx%d):\n", m, p);
//     create_matrix(m, p, arr1);

//     printf("\nEnter elements for second matrix (%dx%d):\n", p, n);
//     create_matrix(p, n, arr2);

//     printf("\nFirst matrix:\n");
//     display(m, p, arr1);
//     printf("\nSecond matrix:\n");
//     display(p, n, arr2);

//     multiply(m, p, n, arr1, arr2, result);

//     printf("\nProduct of the two matrices:\n");
//     display(m, n, result);

//     return 0;
// }




// Q.8 

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, i, sum = 0;
//     int *arr;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     arr = (int *)malloc(n * sizeof(int));

//     if (arr == NULL) {
//         printf("Memory not allocated.\n");
//         return 1;
//     }

//     for (i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }

//     for (i = 0; i < n; i++) {
//         sum += arr[i];
//     }

//     printf("Sum of array elements = %d\n", sum);

//     free(arr);
//     return 0;
// }




