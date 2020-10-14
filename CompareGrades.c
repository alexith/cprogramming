#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int serialNo;
    int studentRollNo;
    const char *studentName[200];
    double studentGpa;
};

int main()
{
    struct Student student1;
    student1.serialNo = 1;
    student1.studentRollNo = 1444084;
    student1.studentName[50] = "Akshay";
    student1.studentGpa = 2.4;

    struct Student student2;
    student2.serialNo = 2;
    student2.studentRollNo = 144085;
    student2.studentName[50] = "Rishabh";
    student2.studentGpa = 3.1;

    float gpaDifference1 = student1.studentGpa - student2.studentGpa;
    float gpaDifference2 = student2.studentGpa - student1.studentGpa;

    if (student1.studentGpa <= student2.studentGpa)
    {
        printf("%d. name: %s\n  rollno: %d\n    GPA: %f\n\n  difference: %f\n\n%d. name: %s\n    rollno: %d\n    GPA: %f\n\n", student1.serialNo, student1.studentName[50], student1.studentRollNo, student1.studentGpa, gpaDifference1, student2.serialNo, student2.studentName[50], student2.studentRollNo, student2.studentGpa);
    }
    else if (student1.studentGpa >= student2.studentGpa)
    {
        printf("%d. name: %s\n  rollno: %d\n    GPA: %f\n\n  difference: %f\n\n%d. name: %s\n    rollno: %d\n    GPA: %f\n\n", student2.serialNo, student2.studentName[50], student2.studentRollNo, student2.studentGpa, gpaDifference2, student1.serialNo, student1.studentName[50], student1.studentRollNo, student1.studentGpa);
    }

    return 0;
}