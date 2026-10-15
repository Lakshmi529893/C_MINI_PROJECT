v25he11g8@srvr2:~/miniproject$ cat student_del.c
#include "header.h"

void stud_del()
{
    char ch;
    int roll;
    char name[50];
    S *p, *prev;
    int found = 0;
    if (head == NULL)
    {
        printf("No records available\n");
        return;
    }
    printf("\nR/r : Delete using Roll Number\n");
    printf("N/n : Delete using Name\n");
    printf("Enter Your Choice: ");
    scanf(" %c", &ch);
    if (ch == 'R' || ch == 'r')
    {
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        p = head;
        prev = NULL;
        while (p != NULL)
        {
            if (p->roll == roll)
            {
                if (p == head)
                {
                    head = p->next;
                }
                else
                {
                    prev->next = p->next;
                }
                free(p);
                printf("Record deleted successfully\n");
                return;
            }
            prev = p;
            p = p->next;
        }
        printf("Roll number not found\n");
    }
    else if (ch == 'N' || ch == 'n')
    {
        printf("Enter Name: ");
        scanf(" %[^\n]", name);
        p = head;
        printf("\nMatching Records:\n");
        while (p != NULL)
        {
            if (strcmp(p->name, name) == 0)
            {
                printf("%d\t%s\t%.2f\n",
                       p->roll,
                       p->name,
                       p->per);

                found = 1;
            }
            p = p->next;
        }
        if (found == 0)
        {
            printf("Name not found\n");
            return;
        }
        printf("Enter Roll Number to delete: ");
        scanf("%d", &roll);
        p = head;
        prev = NULL;
        while (p != NULL)
        {
            if (p->roll == roll &&
               strcmp(p->name, name) == 0)
            {
                if (p == head)
                {
                    head = p->next;
                }
                else
                {
                    prev->next = p->next;
                }

                free(p);
                printf("Record deleted successfully\n");
                return;
            }
            prev = p;
            p = p->next;
        }

        printf("Invalid Roll Number\n");
    }
    else
    {
        printf("Invalid choice\n");
    }
}