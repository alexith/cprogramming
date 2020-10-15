#include <iostream>

/********************************************
 * 
 * 
 *      ART_FORM RECOMMENDATION SYSTEM
 *          (Mr. AFRSys)
 *            by alexith
 * 
 * 
 *******************************************/

class Artform {
    public:
    std::string name;
    int releaseYear;
    std::string genre;
    std::string description;
    float imdbRating;
};

int main()
{
    //inputs variables
    std::string firstName;
    std::string todaysSpecial;
    
    std::string task;
    std::string artForm;
    std::string artName;

    //know the user

    std::cout << "Please enter your name:\n";
    std::cin >> firstName;

    //Mr. AFRSys greets user

    std::cout << "\nHello " << firstName << ",\n\ndo you like to add your recent fav. movie or search for some movie randomly from available obscure movies\n[for e.g. key: task\nc: to create a new art\nf: to find movie/music/podcast,\nu: to update already present art,\nd: to delete prev. added art form\nchoose the option key [c / f / u / d]:\n";
    std::cin >> task;

    if (task == "c")
    {
        std::cout << "\nWhat form of art do you wish to create today ? [ enter below : movie, music, etc ] :\n";
        std::cin >> artForm;

        if (artForm == "movie")
        {
            class Artform movie;
            std::cout << "That\'s interesting,\ndo you like to specify the name of the " + artForm + ":\n";
            std::cin >> movie.name;
            std::cout << "You added new " + movie.name + "to the library\n";
        }
        if (artForm == "music")
        {
            class Artform music;
            std::cout << "That\'s interesting,\ndo you like to specify the name of the " + artForm + ":\n";
            std::cin >> music.name;
            std::cout << "You added new " + music.name + " to the library\n";
        }
        else
        {
            class Artform others;
            std::cout << "That\'s interesting,\ndo you like to specify the name of the " + artForm + ":\n";
            std::cin >> others.name;
            std::cout << "You added new " + others.name + "to the library\n";
        }
    }

    return 0;
}