#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>


/**
 *@brief: getUserInput takes all the necessary user inputs 
 * 
 */
void getUserInput(std::string &user_name, std::vector<std::string> &list_adjective, std::string &birth_season, const std::set<std::string> &seasons);
/**
 * @brief: returns an adjective based on the length of list_adjective container and name
 * 
 */
const std::string &getAdjective(const std::vector<std::string> &list_adjective, const std::string &name);
/**
 * @brief: get the string from map of birth season to adjective
 */
inline const std::string &getNoun(const std::map<std::string, std::string> &season_to_adjective, const std::string &birth_season);

/**
 * @brief: get an ending string from the list of the ending string and length of user name
 */
const std::string &getEnding(const std::vector<std::string> &list_ending, const std::string &name);



int main()
{

    const std::set<std::string> seasons = {"spring", "autumn", "winter", "summer"};
    const std::map<std::string, std::string> seasons_to_adjective = {{"spring", "STL guru"},
                                                                     {"autumn", "C++ expert"},
                                                                     {"autumn", "coding beast"},
                                                                     {"winter", "software design hero"}};
    const std::vector<std::string> ending_strings = {"eats UB for breakfast",
                                                     "finds errors quicker than the compiler", "is not afraid of C++ error messages"};
    std::cout << "Welcome to the fortune teller program!" << std::endl;
//Locals
    std::string user_name;
    std::vector<std::string> list_adjective;
    std::string birth_season;
//getting user input
    getUserInput(user_name, list_adjective, birth_season, seasons);
//Final fortune statement
    std::cout << user_name << ", " << getAdjective(list_adjective, user_name)<<" " << getNoun(seasons_to_adjective, birth_season)
            <<" "  << getEnding(ending_strings, user_name) << std::endl;
}
/**
 *@brief: getUserInput takes all the necessary user inputs 
 * 
 */
void getUserInput(std::string &user_name, std::vector<std::string> &list_adjective, std::string &birth_season, const std::set<std::string> &seasons)
{
    std::string user_adjective;
    std::cout << "Please enter your name " << std::endl;
    std::cin >> user_name;
    //takes a valid season
    while (seasons.find(birth_season) == seasons.end())
    {
        std::cout << "Please enter the time of year you were born: \n";
        std::cout << "(pick from 'spring', 'autumn','winter', 'summer') \n";
        std::cin >> birth_season;
    }//end while

//ToDo: checks validity of the adjective, i.e: its not a numeric or something which is not meaning full english word
    std::cout << "Please enter an adjective \n";
    std::cin >> user_adjective;
    list_adjective.emplace_back(user_adjective);

    std::cout << "Please enter another adjective \n";
    std::cin >> user_adjective;
    list_adjective.emplace_back(user_adjective);
}
/**
 * @brief: returns an adjective based on the length of list_adjective container and name
 * 
 */
const std::string &getAdjective(const std::vector<std::string> &list_adjective, const std::string &name)
{
    const std::size_t adjective_index = name.length() % list_adjective.size();
    return list_adjective.at(adjective_index);
}
/**
 * @brief: get the string from map of birth season to adjective
 */
inline const std::string &getNoun(const std::map<std::string, std::string> &season_to_adjective, const std::string &birth_season)
{
    auto itr = season_to_adjective.find(birth_season);
    return itr->second;
}
/**
 * @brief: get an ending string from the list of the ending string and length of user name
 */
const std::string &getEnding(const std::vector<std::string> &list_ending, const std::string &name)
{
    return getAdjective(list_ending, name);
}