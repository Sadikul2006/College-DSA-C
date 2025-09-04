#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int stack[MAX];  
int top = -1;
void push() {
    int val;
    if (top >= MAX - 1) {
        printf("Stack Overflow!\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &val);
        top++;
        stack[top] = val;
        printf("%d pushed to stack\n", val);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is empty! cannot pop.\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", stack[top]);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n---------------MENU-------------\n");
        printf("1. Push element into stack\n");
        printf("2. Pop element from stack\n");
        printf("3. Peek top element of stack\n");
        printf("4. Display stack\n");
        printf("5. Exit\n");
        printf("--------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: peek(); break;
        case 4: display(); break;
        case 5: exit(0);
        default: printf("Invalid choice!\n");
        }
    }
    return 0;
}







