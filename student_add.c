#include "header.h"
void stud_add()
{
    S *new = malloc(sizeof(S)), *p=head;
    int r = 1, found;
    while (1) {
        found = 0;
        p = head;
        while (p) {
            if (p->roll == r) {
                found = 1;
                break;
            }
            p = p->next;
        }
        if (!found) break;
        r++;
    }
    new->roll = r;
    printf("Enter name: ");
    scanf(" %[^\n]", new->name);
    printf("Enter percentage: ");
    scanf("%f", &new->per);
    new->next = NULL;
    if (head == NULL) {
        head = new;
    } else {
        p = head;
        while (p->next != NULL)
            p = p->next;

        p->next = new;
    }
}