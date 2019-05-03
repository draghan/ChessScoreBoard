//
// Created by draghan on 2019-05-03.
//

#pragma once

#include <string>

class ValueConfiguration
{
public:
    float winPoints() const noexcept;
    float drawPoints() const noexcept;
    float lossPoints() const noexcept;

    bool loadConfig(const std::string &configPath);
private:
    inline static const float defaultWinValue = 1.0f;
    inline static const float defaultDrawValue = 0.5f;
    inline static const float defaultLossValue = 0.0f;

    float winValue = defaultWinValue;
    float drawValue = defaultDrawValue;
    float lossValue = defaultLossValue;
};



