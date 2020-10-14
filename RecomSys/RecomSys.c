/********************************************
 * 
 *      ART_FORM RECOMMENDATION SYSTEM
 *          {Mr. AFRSys}
 *          by alexith
 * 
 *******************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct ArtForm
{
    char name[50];
    int releaseYear;
    char genre[20];
    char description[200];
    double imdbRating;
};

int main()
{

    //inputs variables

    char firstName[20];

    char todaysSpecial[20];
    
    char* task;
    char artForm[20];
    char artName[50];

    //know the user

    printf("Please enter your first name:\n");
    scanf("%s", firstName);

    //Mr. AFRSys greets user

    printf("\nHello %s,\n\ndo you like to add your recent fav. movie or search for some movie randomly from available obscure movies\n[for e.g. key: task\nc: to create a new art\nf: to find movie/music/podcast,\nu: to update already present art,\nd: to delete prev. added art form\n", firstName);
    //taking input for task 
    scanf("choose the option key [c / f / u / d]: %s", task);

    if (strncmp(task, "c", 1))
    {
        printf("\nWhat form of art do you wish to create today ? [ enter below : movie, music, etc ] :\n");
        scanf("%s", artForm);

        if (strncmp(artForm, "movie", 5))
        {
            struct ArtForm movie;
            printf("That\'s interesting,\ndo you like to specify the name of the %s:\n", artForm);
            artName[35] = scanf("%s", movie.name);
        }
        else if (strncmp(artForm, "music", 5))
        {
            struct ArtForm music;
            printf("That\'s interesting,\ndo you like to specify the name of the %s:\n", artForm);
            artName[35] = scanf("%s", music.name);
        }
        else
        {
            struct ArtForm others;
            printf("That\'s interesting,\n\ndo you like to specify the name of the %s:\n", artForm);
            artName[35] = scanf("%s", others.name);
        }

        printf("You added new %s to the library\n", artName);
    }

    return 0;
}