#include <stdio.h>
#include "student.h"
#include "school.h"

int main() {
    // Initialize the school
    struct School school;
    init_school(&school);

    // Create and add students
    struct Student alice = {1, "Alice", 14, 9, 'A'};
    add_student(&school, alice);

    struct Student bob = {2, "Bob", 15, 10, 'B'};
    add_student(&school, bob);

    // Print all student details
    print_school(&school);

    return 0;
}
