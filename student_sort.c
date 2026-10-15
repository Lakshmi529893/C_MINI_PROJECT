#include "header.h"

void sort_list() {
    S *i, *j;
    char ch;

    if (head == NULL) {
        printf("No records to sort\n");
        return;
    }

    printf("N/n: Name, P/p: Percentage\n");
    scanf(" %c",&ch);

    for(i = head; i != NULL; i = i->next) {
        for(j = i->next; j != NULL; j = j->next) {

            if ( ((ch=='N'||ch=='n') && strcmp(i->name,j->name)>0) ||
                 ((ch=='P'||ch=='p') && i->per > j->per) ) {

                int r = i->roll;
                float p = i->per;
                char n[50];

                strcpy(n, i->name);

                i->roll = j->roll;
                i->per = j->per;
                strcpy(i->name, j->name);

                j->roll = r;
                j->per = p;
                strcpy(j->name, n);
            }
        }
    }

    printf("Sorted successfully\n");
}