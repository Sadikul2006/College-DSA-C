#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *newNode = NULL, *start = NULL, *temp = NULL, *prev = NULL, *deleteNode = NULL ;

void create() {
    int n, val;
    printf("Enter the number of node: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("Enter data for node %d: ", i);
        scanf("%d", &val);
        newNode = malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->next = NULL;

        if(start == NULL) {
            start = newNode;
            temp = newNode;
        }else{
            temp->next = newNode;
            temp = newNode;
        }
    }
}

void display() {
    temp = start;
    printf("link List: ");
    if(start == NULL) {
        printf("List is empty!");
    }
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert_st() {
    int val;
    printf("\nEnter data insert for a start node: ");
    scanf("%d", &val);
    newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = start;
    start = newNode;
}

void insert_end() {
    int val;
    printf("Enter data insert for a last node: ");
    scanf("%d", &val);
    newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if(start == NULL) {
        start = newNode;
    } else {
        temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode; 
    }
}

void insert_any_position() {
    int pos, val;
    printf("Enter the Node position for insert data: ");
    scanf("%d", &pos);
    printf("Enter the data for that position: ");
    scanf("%d", &val);
    newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = start;
        start = newNode;
        return;
    }

    temp = start;
    for(int i = 1; i < pos-1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Invalid Position!\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode; 
}


void delete_st() {
    if (start == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    temp = start;
    start = start->next;
    free(temp);
    printf("First node deleted successfully.\n");
}


void delete_end() {
    if (start == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    
    temp = start;
    if (temp->next == NULL) {
        start = NULL;
        free(temp);
        printf("Last node deleted successfully.\n");
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
    printf("Last node deleted successfully.\n");
}


void delete_any_position() {
    int pos;
    printf("Enter delete Position: ");
    scanf("%d", &pos);
    if (start == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    if (pos == 1) {
        temp = start;
        start = start->next;
        free(temp);
        printf("Node at position %d deleted successfully.\n", pos);
        return;
    }
    
    temp = start;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid Position!\n");
        return;
    }

    deleteNode = temp->next;
    temp->next = deleteNode->next;
    free(deleteNode);
    printf("Node at position %d deleted successfully.\n", pos);
}


int main() {
    int choice;
    create();
    display();
    while(1) {
        printf("<--------MENU-------->\n");
        printf("Enter 1 to inser at beginning.\n");
        printf("Enter 2 to inser at end.\n");
        printf("Enter 3 to inser at any position.\n");
        printf("Enter 4 to delete at beginning.\n");
        printf("Enter 5 to delete at end.\n");
        printf("Enter 6 to delete at any position.\n");
        printf("Enter 7 to exit.\n");
        printf("Enter Your Choice (1 to 7): ");
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
            printf("Invalid Choice!\n");
            break;
        }
    }
    return 0;
}
