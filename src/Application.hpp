//
// Created by draghan on 2019-05-01.
//

#ifndef WXWTEST_APPLICATION_HPP
#define WXWTEST_APPLICATION_HPP

#include <wx/wx.h>
#include "Logic/ScoreBoard.hpp"

class Application: public wxApp
{
public:
    Application():
            configuration{},
            scoreBoard{configuration}
    {
    }

    bool OnInit() final;
    int OnExit() final;

private:
    ValueConfiguration configuration;
    ScoreBoard scoreBoard;
};

#endif //WXWTEST_APPLICATION_HPP
