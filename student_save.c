#include "header.h"

void stud_save()
{
    FILE *fp = fopen("student.dat", "w");
    if (fp == NULL)
    {
        printf("File opening failed\n");
        return;
    }

    S *p = head;

    while (p)
    {
        fprintf(fp, "%d %s %.2f\n",
                p->roll, p->name, p->per);
        p = p->next;
    }

    fclose(fp);
    printf("Saved successfully\n");
}

void load_file()
{
    FILE *fp = fopen("student.dat", "r");
    if (fp == NULL)
        return;

    S temp;
    S *new;

    while (fscanf(fp, "%d %49s %f",
                  &temp.roll, temp.name, &temp.per) == 3)
    {
        new = malloc(sizeof(S));
        if (new == NULL)
            break;

        new->roll = temp.roll;
        strcpy(new->name, temp.name);
        new->per = temp.per;

        new->next = head;
        head = new;
    }

    fclose(fp);
}