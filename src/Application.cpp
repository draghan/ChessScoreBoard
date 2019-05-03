//
// Created by draghan on 2019-05-01.
//

#include "Application.hpp"
#include "Frames/ChessScoreBoardMainFrame.h"

bool Application::OnInit()
{
    this->configuration.loadConfig("config.cfg");

    wxInitAllImageHandlers();

    auto frame = new ChessScoreBoardMainFrame(&(this->scoreBoard), this->configuration, nullptr);

    wxIcon programIcon("ChessScoreBoard.ico", wxBITMAP_TYPE_ICO);
    frame->SetIcon(programIcon);

    frame->Show(true);

    return true;
}

int Application::OnExit()
{
    return wxAppBase::OnExit();
}