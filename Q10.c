#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void del();

struct student
{
    char name[20];
    int rollno;

} std;

void main()
{
    del();
    getch();
}

void del()
{
    char stname[20];
    FILE *fp, *ft;
    struct student std;
    // system("cls");
    // clrscr();
    // gotoxy(10, 3);
    printf("<--:DELETE RECORD:-->");
    // gotoxy(10, 5);
    printf("Enter name of student to delete record : ");
    fflush(stdin);
    gets(stname);
    fp = fopen("record.txt", "rb+");
    if (fp == NULL)
    {
        // gotoxy(10, 6);
        printf("rec Error opening file");
        exit(1);
    }
    ft = fopen("temp.txt", "wb+");
    if (ft == NULL)
    {
        // gotoxy(10, 6);
        printf("temp Error opening file");
        exit(1);
    }
    while (fread(&std, sizeof(std), 1, fp) == 1)
    {
        if (strcmp(stname, std.name) != 0)
            fwrite(&std, sizeof(std), 1, ft);
    }
    fclose(fp);
    fclose(ft);
    remove("record.txt");
    rename("temp.txt", "record.txt");
    // gotoxy(10, 10);
    printf("Press any key to continue.");
    getch();
}