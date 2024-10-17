// Array implementaion of list 
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct List {
    int data[MAX_SIZE];
    int size;
};

void initialize(struct List *list) {
    list->size = 0;
}

void insert(struct List *list, int element) {
    if (list->size == MAX_SIZE) {
        printf("List is full.\n");
        return;
    }
    list->data[list->size] = element;
    list->size++;
}

void delete(struct List *list, int index) {
    if (index < 0 || index >= list->size) {
        printf("Invalid index.\n");
        return;
    }
    for (int i = index; i < list->size - 1; i++) {
        list->data[i] = list->data[i + 1];
    }
    list->size--;
}

void display(struct List *list) {
    if (list->size == 0) {
        printf("List is empty.\n");
        return;
    }
    printf("List elements: ");
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    struct List list;
    initialize(&list);

    // Insert elements
    insert(&list, 1);
    insert(&list, 2);
    insert(&list, 3);

    // Display the list
    display(&list);

    // Delete an element
    delete(&list, 1);

    // Display the updated list
    display(&list);

    return 0;
}
