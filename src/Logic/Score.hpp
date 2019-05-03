//
// Created by draghan on 2019-05-01.
//

#ifndef WXWTEST_SCORE_HPP
#define WXWTEST_SCORE_HPP

#include <string>
#include "ValueConfiguration.hpp"

class Score
{
public:
    enum Result
    {
        Win,
        Draw,
        Loss
    };

    Score(Result result); // NOLINT(google-explicit-constructor,hicpp-explicit-conversions)

    float getValue(const ValueConfiguration &configuration) const noexcept;
    operator std::string() const noexcept;
private:
    Result result;
};

#endif //WXWTEST_SCORE_HPP
