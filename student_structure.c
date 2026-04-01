#include <stdio.h>

// Define structure
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];  // Array of structures

    // Input student details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display student details
    printf("\nStudent Details:\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID = %d\n", s[i].id);
        printf("Name = %s\n", s[i].name);
        printf("Marks = %.2f\n", s[i].marks);
    }

    return 0;
}
