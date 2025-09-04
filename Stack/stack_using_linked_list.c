#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *newNode = NULL, *temp = NULL, *top = NULL;

void push() {
    int val;
    newNode = malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = top;  
    top = newNode;
    printf("%d pushed to stack\n", val);
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty, nothing to pop\n");
        return;
    }
    temp = top;
    top = top->next;
    printf("%d poped to stack\n", temp->data);
    free(temp);
}

void peek() {
    printf("Top element is: %d\n", top->data);
}

void display() {
    temp = top;
    printf("Stack: ");
    if (top == NULL) {
        printf("Stack is empty, nothing to pop\n");
        return;
    }

    while (temp != NULL) { 
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    while (1) {
        int choice;
        printf("-------------MENU--------------\n");
        printf("Enter 1 for push data in Stack.\n");
        printf("Enter 2 for pop data in Stack.\n");
        printf("Enter 3 for peek data in Stack.\n");
        printf("Enter 4 for exit.\n");
        printf("-------------------------------\n");
        printf("Enter your choice(1 to 4): ");
        scanf("%d", &choice);
        switch (choice) {
        case 1 :
            push();
            display();
            break;
        
        case 2 :
            pop();
            display();
            break;
        
        case 3 :
            peek();
            display();
            break;
        
        case 4 :
            display();
            exit(0);
            break;
        
        default:
            printf("Invalid Input!");
            break;
        }
    }
    
    return 0;
}