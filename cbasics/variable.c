#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char myName[] = "George";
    int myAge = "80";
    
    printf("There once was a man name %s\n", myName); //%s is to insert a string here
    printf("He was %d y\/o\n", myAge);
    printf("He like the name %s\n", myName);
    printf("But he hate being %d\n", myAge);
    
    return 0;
}