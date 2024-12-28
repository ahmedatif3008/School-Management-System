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
void print_school(const struct School *sc); // why const?

// Methods to implement
void remove_student(struct School *sc, int id);
struct Student search_student(struct School *sc, int id);


#endif