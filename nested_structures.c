#include <stdio.h>

// Inner structure
struct Address {
    char city[50];
    int pincode;
};

// Outer structure
struct Student {
    int id;
    char name[50];
    struct Address addr;  // Nested structure
};

int main() {
    struct Student s;

    // Input values
    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter City: ");
    scanf("%s", s.addr.city);

    printf("Enter Pincode: ");
    scanf("%d", &s.addr.pincode);

    // Display values
    printf("\nStudent Details:\n");
    printf("ID = %d\n", s.id);
    printf("Name = %s\n", s.name);
    printf("City = %s\n", s.addr.city);
    printf("Pincode = %d\n", s.addr.pincode);

    return 0;
}
