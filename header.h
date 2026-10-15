#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    int roll;
    char name[50];
    float per;
    struct student *next;
} S;

extern S *head;

// function declarations
void stud_add();
void stud_del();
void stud_show();
void stud_mod();
void stud_save();
void load_file();
void sort_list();

#endif