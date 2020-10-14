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
    char name[75];
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
    char artName[75];

    //know the user

    printf("Please enter your first name:\n");
    scanf("%s", firstName);

    //Mr. AFRSys greets user

    printf("Hello %s,\n\ndo you like to add your recent fav. movie or search for some movie randomly from available obscure movies\n[for e.g. key: task\n c: to create a new art\nf: to find movie/music/podcast,\nu: to update already present art,\nd: to delete prev. added art from", firstName);

    //taking input for task 
    scanf("choose the option key [c / f / u / d]: %c", task);

    if (strcmp(task, "c"))
    {
        printf("What form of art do you wish to consume today [enter below movie, music, etc]?: ");
        scanf("%s", artForm);

        if (strcmp(artForm, "movie"))
        {
            struct ArtForm movie;
        }
        else if (strcmp(artForm, "music"))
        {
            struct ArtForm music;
        }
        else
        {
            struct ArtForm others;
        }
        printf("That\'s interesting,\ndo you like to specify the name of the %s:\n", artForm);
        scanf("%s", artForm);
    }
    return 0;
}