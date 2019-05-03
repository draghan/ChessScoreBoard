//
// Created by draghan on 2019-05-01.
//

#pragma once

#include <vector>

#include "Score.hpp"

class ScoreBoard
{
public:
    explicit ScoreBoard(const ValueConfiguration &configuration);

    void reset();
    bool empty();
    std::string getHistory();
    std::string getScores();
    void addScore(Score score);
    void removeLastScore();
    std::string getLastScore();
private:
    std::vector<Score> scores;
    const ValueConfiguration &configuration;
};



