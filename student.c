#include<stdio.h>
#include "student.h"

student students[100];
int count =0;
void addstudent()
{
    printf("Enter the Rollno: ");
    scanf("%d",&students[count].rollno);
    printf("Enter the name: ");
    scanf("%s",students[count].name);
    printf("Enetr the 3 marks: ");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&students[count].marks[i]);
    }
    count++;
    printf("Student Added Succesfully!\n\n");
}
void viewstudent()
{
    if(count==0)
    {
        printf("No students to show:\n\n");
        return;
    }
    for(int i=0;i<count;i++)
    {
        float total =0;
        printf("%-8d",students[i].rollno);
        printf("%-15s",students[i].name);
        for(int j=0;j<3;j++)
        {
            printf("%-8.2f",students[i].marks[j]);
            total=total+students[i].marks[j];
        }
        printf("Total: %-10.2f | Average: %-10.2f\n",total,total/3);
        printf("\n\n");
    }
}