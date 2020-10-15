#include <iostream>
#include <list>

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
    std::string userName;
    std::string todaysSpecial;
    
    std::string task;
    std::string artForm;
    std::string artName;

    std::list<std::string> artLibrary{};



    //know the user

    std::cout << "Please enter your name:\n";
    getline(std::cin, userName);

    //Mr. AFRSys greets user

    std::cout << "\nHello " << userName << ",\n\ndo you like to add your recent fav. movie or search for some movie randomly from available obscure movies\n[for e.g. key: task\nc: to create a new art\nf: to find movie/music/podcast,\nu: to update already present art,\nd: to delete prev. added art form\nchoose the option key : [c / f / u / d]\n";
    std::cin >> task;

    //user create new category of art

    if (task == "c")
    {
        std::cout << "\nWhat form of art do you wish to create today ? : [for e.g. movie, music, etc]\n";
        std::cin >> artForm;

        if (artForm == "movie")
        {
            class Artform movie;
            std::cout << "That\'s interesting,\ndo you like to specify the name of the " + artForm + ":\n";
            std::cin >> movie.name;
            std::cout << "You added new " + movie.name + "to the library\nlets add few more info regarding " + movie.name + ", add the release year:\n";
            
            std::cin >> movie.releaseYear;
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

    if (task == "f")
    {
        std::cout << "Please enter the keyword you want to search from library: [for e.g., the big lebowski]\n";
    }


    //show current art library
    
    if(artLibrary.size() == 0)
    {
        std::cout << "It's a ghost town ={ in here\n";
    }
        else
    {
        std::cout << "Your art library has item(s) loaded\n";
    }


    return 0;
}