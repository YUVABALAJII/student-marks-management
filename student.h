#ifndef STUDENT_H
#define STUDENT_H
typedef struct
{
    int rollno;
    char name[100];
    float marks[3];
}student;
extern student students[100];
extern int count;
void addstudent();
void viewstudent();

#endif
