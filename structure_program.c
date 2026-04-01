#include <stdio.h>

// Define structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    // Declare structure variable
    struct Student s;

    // Input values
    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Access and display members
    printf("\nStudent Details:\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);

    return 0;
}
