#ifndef NO_STRING_ATTACHED_SPLIT_STRING_H
#define NO_STRING_ATTACHED_SPLIT_STRING_H

#include <vector>
#include <string>

namespace no_strings_attached::Split
{
    std::vector<std::string> Split(const std::string &input_string, const std::string &delim);
    std::vector<std::string> Split(const std::string &input_string, const std::string &delim, std::size_t number_of_splits_to_return);

} // namespace no_strings_attached::split_string

#endif