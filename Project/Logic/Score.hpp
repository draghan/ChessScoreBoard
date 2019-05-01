//
// Created by draghan on 2019-05-01.
//

#ifndef WXWTEST_SCORE_HPP
#define WXWTEST_SCORE_HPP

#include <string>

class Score
{
public:
    enum Result
    {
        Win,
        Draw,
        Lose
    };

    Score(Result result); // NOLINT(google-explicit-constructor,hicpp-explicit-conversions)

    operator float() const noexcept;
    operator std::string() const noexcept;

private:
    Result result;
};

#include "../Frames/generated.h"

#endif //WXWTEST_SCORE_HPP
