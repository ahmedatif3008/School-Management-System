#include <stdio.h>
#include "student.h"

void print_student(struct Student student){
    printf("Student %d : %s , %d y/o, grade %d, section %c \n", student.id, student.name, student.age, student.grade, student.section);
}

int main(){
    struct Student a = {1, "Alice", 14, 9, 'A'};
    print_student(a);


    struct Student b = {2, "Bob", 20, 11, 'C'};
    print_student(b);
}