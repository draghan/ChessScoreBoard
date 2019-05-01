//
// Created by draghan on 2019-05-01.
//

#include "Score.hpp"

Score::Score(Score::Result result)
        : result{result}
{
}

Score::operator float() const noexcept
{
    switch(this->result)
    {
        case Win:
            return 1.0f;
        case Draw:
            return 0.5f;
        case Lose:
            return 0.0f;
    }
}

Score::operator std::string() const noexcept
{
    switch(this->result)
    {
        case Win:
            return "win";
        case Draw:
            return "draw";
        case Lose:
            return "lose";
    }
}
