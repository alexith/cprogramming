/********************************************
*
*
*      ART_FORM RECOMMENDATION SYSTEM
*          (Mr. AFRSys)
*            by alexith
*
*
*******************************************/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct ArtForm
{
    char name[50];
    int releaseYear;
    char genre[20];
    char description[200];
    float imdbRating;
};

int main() {

    //inputs variables

    char firstName[20];

    char todaysSpecial[20];

    const char* task;
    char artForm[50];
    char artName[50];

    //know the user

    printf("Please enter your first name:\n");
    scanf("%s", &firstName);

    //Mr. AFRSys greets user

    printf("\nHello %s,\n\ndo you like to add your recent fav. movie or search for some movie randomly from available obscure movies\n[for e.g. key: task\nc: to create a new art\nf: to find movie/music/podcast,\nu: to update already present art,\nd: to delete prev. added art form\n", firstName);
    //taking input for task
    scanf("choose the option key [c / f / u / d]: %c", &task);

    if ((task == 'c') {
        printf("\nWhat form of art do you wish to create today ? [ enter below : movie, music, etc ] :\n");
        scanf("%s", &artForm);

        if (strncmp(artForm, "movie") == "0") {
            struct ArtForm movie;
            printf("That\'s interesting,\ndo you like to specify the name of the %s:\n", artForm);
            artName[20] = scanf("%s", &movie.name);
            printf("You added new %s to the library\n", artName);
        }
        else if (scanf("%s", &artForm) == "music") {
            struct ArtForm music;
            printf("That\'s interesting,\ndo you like to specify the name of the %s:\n", artForm);
            artName[20] = scanf("%s", &music.name);
            printf("You added new %s to the library\n", artName);
        }
        else
        {
            struct ArtForm others;
            printf("That\'s interesting,\n\ndo you like to specify the name of the %s:\n", artForm);
            artName[20] = scanf("%s", &others.name);
            printf("You added new %s to the library\n", artName);
        }

    }

        return 0;
    }