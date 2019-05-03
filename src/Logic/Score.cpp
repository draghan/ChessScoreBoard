//
// Created by draghan on 2019-05-01.
//

#include "Score.hpp"

Score::Score(Score::Result result)
        : result{result}
{
}

float Score::getValue(const ValueConfiguration &configuration) const noexcept
{
    switch (this->result)
    {
        case Win:
            return configuration.winPoints();
        case Draw:
            return configuration.drawPoints();
        case Loss:
            return configuration.lossPoints();
    }
}

Score::operator std::string() const noexcept
{
    switch (this->result)
    {
        case Win:
            return "win";
        case Draw:
            return "draw";
        case Loss:
            return "loss";
    }
}
