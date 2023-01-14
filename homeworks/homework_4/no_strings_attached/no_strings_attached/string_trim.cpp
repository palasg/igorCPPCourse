#include "inc/string_trim.h"
#include <algorithm>

namespace no_strings_attached::string_trim
{
    static inline std::string Ltrim(std::string &str, char char_to_trim)
    {
        str.erase(str.begin(), std::find_if(str.begin(), str.end(), [char_to_trim](int c)
                                            { return (c != char_to_trim); }));
        return str;
    }

    static inline std::string Rtrim(std::string &str, char char_to_trim)
    {
        str.erase(std::find_if(str.rbegin(), str.rend(), [char_to_trim](int c)
                               { return (c != char_to_trim); })
                      .base(),
                  str.end());
        return str;
    }

    std::string Trim(const std::string &str, char char_to_trim, Side side)
    {
        std::string input_copy = str;
        switch (side)
        {
        case Side::kLeft:
            // start triming from str.begin
            Ltrim(input_copy, char_to_trim);
            break;
        case Side::kRight:
            Rtrim(input_copy, char_to_trim);
            break;
        case Side::kBoth:
            Ltrim(input_copy, char_to_trim);
            Rtrim(input_copy, char_to_trim);
            break;
        default:
            break;
        }
        return input_copy;
    }

    std::string Trim(const std::string &str)
    {
        char char_to_trim = ' ';
        return Trim(str, char_to_trim, Side::kBoth);
    }
} // namespace no_strings_attached::string_trim
