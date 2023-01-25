#ifndef NO_STRING_ATTACHED_STRING_TRIM_H
#define NO_STRING_ATTACHED_STRING_TRIM_H
#include<string>

namespace no_strings_attached::Trim
{
    enum class Side{
        kLeft,
        kRight,
        kBoth
    };
    std::string Trim(const std::string& str, char char_to_trim, Side side);
    std::string Trim(const std::string& str);


    
} // namespace no_strings_attached::string_trim


    enum class Side{
        kLeft,
        kRight,
        kBoth
    };
    std::string Trim(const std::string& str, char char_to_trim, Side side);


#endif