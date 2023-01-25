#include "string_split.h"

namespace no_strings_attached::split_string
{

    std::vector<std::string> Split(const std::string &input_string, const std::string &delim)
    {
        std::vector<std::string> result;
        std::string copy_input_string = input_string;
        while (copy_input_string.size() > 0)
        {
            std::size_t found_pos = copy_input_string.find(delim);
            if (found_pos == std::string::npos)
            {
                result.push_back(copy_input_string);
                return result;
            }
            else
            {
                result.push_back(copy_input_string.substr(0, found_pos));
                copy_input_string = copy_input_string.substr(found_pos+delim.size());
            }
        }
        return result;
    }

std::vector<std::string> Split(const std::string &input_string, const std::string &delim, std::size_t number_of_splits_to_return){
    std::vector<std::string>result;
    std::vector<std::string>all_elements = Split(input_string,delim);
    for (size_t i = 0; i < number_of_splits_to_return; i++)
    {
        result.push_back(all_elements[i]);
    }

    return result;
    
}


} // end of namespace no_strings_attached::split_string