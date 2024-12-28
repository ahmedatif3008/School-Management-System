#include <stdio.h>
#include "student.h"

void print_student(struct Student student){
    printf("Student %d : %s , %d y/o, grade %d, section %c \n", student.id, student.name, student.age, student.grade, student.section);
}


