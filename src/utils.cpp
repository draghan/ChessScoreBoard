//
// Created by draghan on 2019-05-03.
//

#include <sstream>
#include "utils.hpp"

std::string getAlignedString(float number, bool withLeadingPlus)
{
    std::stringstream ss;
    ss.setf(std::ios::fixed, std::ios::floatfield);

    if (static_cast<int>(number) == number)
    {
        ss.precision(0);
    }
    else
    {
        ss.precision(1);
    }

    if (number > 0 && withLeadingPlus)
    {
        ss << "+";
    }

    ss << number;
    return ss.str();
}
