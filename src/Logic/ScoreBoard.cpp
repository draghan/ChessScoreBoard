//
// Created by draghan on 2019-05-01.
//

#include <numeric>
#include <algorithm>
#include <sstream>

#include "ScoreBoard.hpp"
#include "../utils.hpp"

void ScoreBoard::reset()
{
    this->scores.clear();
}

bool ScoreBoard::empty()
{
    return this->scores.empty();
}

std::string ScoreBoard::getHistory()
{
    std::stringstream ss;
    ss.setf(std::ios::fixed, std::ios::floatfield);
    ss.precision(1);

    bool first = true;
    std::for_each(this->scores.rbegin(), this->scores.rend(), [&](const auto &score)
    {
        if (first)
        {
            first = false;
        }
        else
        {
            ss << ", ";
        }

        ss << getAlignedString(score.getValue(this->configuration));
    });
    return ss.str();
}

std::string ScoreBoard::getScores()
{
    float allScores = std::accumulate(this->scores.begin(), this->scores.end(), 0.0f, [&](float sum, const Score &score)
    {
        return sum + score.getValue(this->configuration);
    });

    return "Score: " + getAlignedString(allScores) + " / " + std::to_string(this->scores.size());
}

void ScoreBoard::addScore(Score score)
{
    this->scores.push_back(score);
}

void ScoreBoard::removeLastScore()
{
    if (!this->scores.empty())
    {
        this->scores.pop_back();
    }
}

std::string ScoreBoard::getLastScore()
{
    if (this->scores.empty())
    {
        return std::string{};
    }

    return *(this->scores.end() - 1);
}

ScoreBoard::ScoreBoard(const ValueConfiguration &configuration)
        : configuration{configuration}
{
}
