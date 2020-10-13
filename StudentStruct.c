#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50]; //name string hold 50 characters
    char major[50];
    int age;
    double gpa;
};

int main() {

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Computers");
             
    printf("%f", student1.gpa);

    return 0;
}