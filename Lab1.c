// Implementation of structures
#include <stdio.h>

// Define a structure named "student" with members
struct student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    // Create an instance of the "student" structure
    struct student s;

    // Input data for the student
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
