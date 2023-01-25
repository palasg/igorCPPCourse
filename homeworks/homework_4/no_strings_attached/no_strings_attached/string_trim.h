#ifndef NO_STRING_ATTACHED_STRING_TRIM_H
#define NO_STRING_ATTACHED_STRING_TRIM_H
#include <string>

namespace no_strings_attached
{
        enum class Side
        {
            kLeft,
            kRight,
            kBoth
        };
    namespace Trim
    {
        std::string Trim(const std::string &str, char char_to_trim, Side side);
        std::string Trim(const std::string &str);

    } // namespace Trim

} // namespace no_strings_attached

#endif