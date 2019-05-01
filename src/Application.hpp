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
    int OnExit() final;
    bool OnInit() final;

private:
    ScoreBoard scoreBoard;
};


#endif //WXWTEST_APPLICATION_HPP
