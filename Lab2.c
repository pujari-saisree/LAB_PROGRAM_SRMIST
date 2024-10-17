// Implementation of structures using pointers
#include <stdio.h>
#include <stdlib.h>

// Define a structure named "student" with members
struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    // Create a pointer to a "student" structure
    struct student *s;

    // Allocate memory for the "student" structure
    s = (struct student *)malloc(sizeof(struct student));

    // Check if memory allocation was successful
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input data for the student
    printf("Enter student name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_number);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Display student information using pointer notation
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_number);
    printf("Marks: %.2f\n", s->marks);

    // Free the allocated memory
    free(s);

    return 0;
}
