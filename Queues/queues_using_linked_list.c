#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *newNode = NULL, *temp = NULL, *front = NULL, *rear = NULL;

void enqueue() {
    int val;
    newNode = malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = NULL;
    if(front == NULL) {
        front = newNode;
    }else {
        rear->next = newNode;
    }
    rear = newNode; 
    printf("%d Insert to Queue\n", val);
}

void dequeue() {
    if (front == NULL) {
        printf("Stack is empty, nothing to pop\n");
        return;
    }
    temp = front;
    front = front->next;
    printf("%d delete to Queue\n", temp->data);
    free(temp);
    if(front == NULL) {
        rear = NULL;
    }
}

void peek() {
    if(front == NULL) {
        printf("Queue is empty\n");
    } else {
        printf("First element is: %d\n", front->data);
    }
}

void display() {
    temp = front;
    printf("Queue: ");
    if (front == NULL) {
        printf("Queue is empty\n\n");
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
        printf("Enter 1 for insert data in Queue.\n");
        printf("Enter 2 for delete data in Queue.\n");
        printf("Enter 3 for first data in Queue.\n");
        printf("Enter 4 for exit.\n");
        printf("-------------------------------\n");
        printf("Enter your choice(1 to 4): ");
        scanf("%d", &choice);
        switch (choice) {
        case 1 :
            enqueue();
            display();
            break;
        
        case 2 :
            dequeue();
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