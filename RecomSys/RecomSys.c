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

struct ArtForm {
    char name[75];
    int releaseYear;
    char genre[20];
    char description[200];
    double imdbRating
};


int main() {

    //inputs variables
    
    char userName[50];

    //know the user

    printf("Please enter your name:\n");

    fgets("%s", userName);
    
    //Mr. AFRSys greets user

    printf("Hello "%s"", userName);

    struct ArtForm movie;

    struct ArtForm music;
    
    char todaySpecial[20];

    printf("")


    printf("Hello,\n\nwhat form of art do you wish to consume today ? [enter below movie, music, etc]");

    getf("%ls", todaySpecial[20]);

    if (movie.genre[20] == "sci fi"){

    }


}