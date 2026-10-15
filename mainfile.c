#include "header.h"

S *head = NULL;

int main() {
    char ch;

    load_file();

    while (1) {
        printf("\n**** STUDENT RECORD MENU ****\n");
        printf("A/a : Add\nD/d : Delete\nS/s : Show\nM/m : Modify\n");
        printf("V/v : Save\nT/t : Sort\nE/e : Exit\n");
        printf("Enter choice: ");
        scanf(" %c", &ch);

        switch (ch) {
            case 'A': case 'a': stud_add(); break;
            case 'D': case 'd': stud_del(); break;
            case 'S': case 's': stud_show(); break;
            case 'M': case 'm': stud_mod(); break;
            case 'V': case 'v': stud_save(); break;
            case 'T': case 't': sort_list(); break;
            case 'E': case 'e':
                printf("S/s: Save & Exit, E/e: Exit without saving\n");
                scanf(" %c", &ch);
                if (ch=='S'||ch=='s') stud_save();
                exit(0);
        }
    }
}