// implementaion of doubley linked list 
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void delete(int position) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (position == 1) {
        struct Node *temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        return;
    }

    struct Node *temp = head;
    for (int i = 1; i < position - 1; i++) {
        if (temp->next == NULL) {
            printf("Invalid position.\n");
            return;
        }
        temp = temp->next;
    }

    struct Node *toDelete = temp->next;
    temp->next = toDelete->next;
    if (toDelete->next != NULL) {
        toDelete->next->prev = temp;
    }
    free(toDelete);
}

void display() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    printf("List elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insert(1);
    insert(2);
    insert(3);

    display();

    delete(2);

    display();

    return 0;
}
