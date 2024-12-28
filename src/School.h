#ifndef SCHOOL_H
#define SCHOOL_H

#include "student.h"

struct School
{
    struct Student st[100];
    int student_count;
};

void init_school(struct School *sc);
void add_student(struct School *sc, struct Student st);
void remove_student(struct School *sc, int id);
void print_school(const struct School *sc); // why const?


#endif