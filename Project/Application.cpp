//
// Created by draghan on 2019-05-01.
//

#include "Application.hpp"
#include "Frames/ChessScoreBoardMainFrame.h"

bool Application::OnInit()
{
    wxInitAllImageHandlers();

    auto frame = new ChessScoreBoardMainFrame(&(this->scoreBoard), nullptr);

    wxIcon programIcon("ChessScoreBoard.ico", wxBITMAP_TYPE_ICO);
    frame->SetIcon(programIcon);

    frame->Show(true);

    return true;
}

int Application::OnExit()
{
    return wxAppBase::OnExit();
}