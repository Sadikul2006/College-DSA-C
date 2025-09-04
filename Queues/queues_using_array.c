#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int val;
    printf("Enter insert data: ");
    scanf("%d", &val);
    if(rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", val);
    }else {
        if(front == - 1) front = 0;
        rear++;
        queue[rear] = val;
        printf("%d inserted into Queue\n", val);
    }
}

void dequeue() {
    if(front == -1) {
        printf("Queue is empty! Cannot delete.\n");
    }else {
        printf("%d deleted from Queue\n", queue[front]);
        front++;
        if(front > rear) {
            front = rear = -1;
        }
    }
}

void peek() {
    if(front != -1) {
        printf("First element is %d", queue[front]);
    }else {
        printf("Queue is empty!\n");
    }
}

void display() {
    if(front <= rear && front > -1) {
        printf("Queues: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }else {
        printf("Queue is empty!\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n---------------MENU-------------\n");
        printf("1. Insert element into Queue\n");
        printf("2. delete element from Queue\n");
        printf("3. Peek top element of Queue\n");
        printf("4. Display Queue\n");
        printf("5. Exit\n");
        printf("--------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}