#include "header.h"

void stud_show() {
    S *p = head;

    if (!p) {
        printf("No records\n");
        return;
    }

    printf("\n---------------------------------\n");
    printf("Roll\tName\t\tPercentage\n");
    printf("---------------------------------\n");

    while (p) {
        printf("%-8d %-15s % -10.2f\n", p->roll, p->name, p->per);
        p = p->next;
    }
}