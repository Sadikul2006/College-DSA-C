#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *newNode = NULL, *temp = NULL, *start = NULL, *deleteNode = NULL;

void create() {
    int n, val;
    printf("Enter the Number of List: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter the data for Node %d: ", i);
        scanf("%d", &val);
        newNode = malloc(sizeof(struct Node));
        newNode->prev = NULL;
        newNode->data = val;
        newNode->next = NULL;
        if(start == NULL) {
            start = newNode;
            temp = newNode;
        } else {
            newNode->prev = temp;
            temp->next = newNode;
            temp = newNode;
        }
    } 
}

void display() {
    if (start == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    temp = start;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_st() {
    int val;
    printf("Enter data for first Node: ");
    scanf("%d", &val);
    newNode = malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->data = val;
    if (start == NULL) {
        newNode->next = NULL;
        start = newNode;
    } else {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    }
}

void insert_end() {
    int val;
    printf("Enter data end for Node: ");
    scanf("%d", &val);
    newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(start == NULL) {
        newNode->prev = NULL;
        start = newNode;
    }else {
        temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    } 
}

void insert_any_position() {
    int val, pos;
    printf("Enter the position for a Node: ");
    scanf("%d", &pos);
    printf("Enter data for Node %d: ", pos);
    scanf("%d", &val);
    newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(start == NULL) {
        start = newNode;
        return;
    }

    if (pos == 1) {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
        return;
    }

    temp = start;
    for (int i = 1; i < pos-1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        temp->next = newNode;
        newNode->prev = temp;
    } else {
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void delete_st() {
    if (start == NULL) {
        printf("List is empty, Delete not possible!.\n");
        return;
    }

    temp = start;
    if (start->next == NULL) {
        start = NULL;
    } else {
        start = start->next;
        start->prev = NULL;
    }
    free(temp);
}

void delete_end() {
    if (start == NULL) {
        printf("List is empty, Delete not possible!.\n");
        return;
    }

    if (start->next == NULL) {
        free(start);
        start = NULL;
        return;
    }

    temp = start;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    deleteNode = temp->next;
    temp->next = NULL;
    free(deleteNode);
}

void delete_any_position() {
    int pos;
    printf("Enter the position for a Node: ");
    scanf("%d", &pos);

    if (start == NULL) {
        printf("List is empty, Delete not possible!.\n");
        return;
    }

    if (pos == 1) {
        delete_st();
        return;
    }

    temp = start;
    for (int i = 1; i < pos-1 && temp->next != NULL; i++) {
        temp = temp->next;
    }
    deleteNode = temp->next;
    if(deleteNode == NULL) {
        printf("Invalid position!\n");
        return;
    }
    temp->next = deleteNode->next;
    if (deleteNode->next != NULL) {
        deleteNode->next->prev = temp;
    }
    free(deleteNode);
}


int main() {
    int choice;
    create();
    display();
    while (1) {
        printf("<------ MENU ------>\n");
        printf("Enter 1 for insert start: \n");
        printf("Enter 2 for insert end: \n");
        printf("Enter 3 for insert any position: \n");
        printf("Enter 4 for delete start: \n");
        printf("Enter 5 for delete end: \n");
        printf("Enter 6 for delete any position: \n");
        printf("Enter 7 for for exit. \n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch (choice) {
        case 1:
            insert_st();
            display();
            break;
        
        case 2:
            insert_end();
            display();
            break;
        
        case 3:
            insert_any_position();
            display();
            break;
        
        case 4:
            delete_st();
            display();
            break;
        
        case 5:
            delete_end();
            display();
            break;
        
        case 6:
            delete_any_position();
            display();
            break;
        
        case 7:
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