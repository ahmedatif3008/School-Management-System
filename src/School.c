#include <stdio.h>
#include "School.h"

void init_school(struct School *sc){
    sc->student_count = 0;
}

void add_student(struct School *sc, struct Student st){
    if (sc->student_count < 100){
        sc->st[sc->student_count] = st;
        sc->student_count++;
    }
}

void print_school(const struct School *sc){
    int student_count = sc->student_count;
    for (int i = 0; i < student_count; i++) {
        print_student(sc->st[i]);
    }
    
    return;
}