#include <wx/wx.h>
#include "Frames/ChessScoreBoardMainFrame.h"


class MyApp: public wxApp
{
public:
    int OnExit() final;
    bool OnInit() final;
};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit()
{
    wxInitAllImageHandlers();
    auto frame = new ChessScoreBoardMainFrame(nullptr);
    wxIcon programIcon("ChessScoreBoard.ico", wxBITMAP_TYPE_ICO);
    frame->SetIcon(programIcon);
    frame->Show(true);
    return true;
}

int MyApp::OnExit()
{
    return wxAppBase::OnExit();
}
