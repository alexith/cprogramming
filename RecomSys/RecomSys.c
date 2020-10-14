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

    char artForm[20];
    int artYear;

    char todaysSpecial[20];
    
    char task;
    char artName[75];

    //know the user

    printf("Please enter your first name:\n");
    scanf("%s", firstName);

    //Mr. AFRSys greets user

    printf("Hello %s,\n\ndo you like to add your recent fav. movie or search for some movie randomly from available obscure movies\n[for e.g. key: task\n c: to create a new art\nf: to find movie/music/podcast,\nu: to update already present art,\nd: to delete prev. added art from", firstName);

    //taking input for task 
    getf("choose the option key [c / f / u / d]: %c", task);

    if (task == "c")
    {
        printf("What form of art do you wish to consume today [enter below movie, music, etc]?: ");
        scanf("%s", artForm[20]);

        if (artForm == "movie")
        {
            struct ArtForm movie;
            artName[75] = movie.name;
            artYear = movie.releaseYear;
        }
        else if (artForm[20] == "music")
        {
            struct ArtForm music;
            artName[75] = music.name;
        }
        else
        {
            struct ArtForm others;
            artName[75] = others.name;
        }
        printf("That\'s interesting,\ndo you like to specify the name of the %s:\n", artForm[20]);
        scanf("%s", artForm);
    }
    return 0;
}