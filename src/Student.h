#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    int id;
    char name[25];
    int age;
    int grade;
    char section;
};

void print_student(struct Student student);

#endif