#include<stdio.h>
#include "student.h"
int main()
{
    int choice;
    while(1)
    {
        printf("-----------STUDENT MARKS MANAGEMENT-------------\n");
        printf("1.AddStudent\n");
        printf("2.ViewStduent\n");
        printf("3.Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            addstudent();
            break;
            case 2:
            viewstudent();
            break;
            case 3:
            printf("Existing the Program GOODBYE!\n");
            return 0;
            default:
            printf("Invalid choice Try again.\n\n");
        }
    }
}