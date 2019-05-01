#include <numeric>
#include <sstream>
#include <iomanip>
#include <algorithm>

#include <wx/wx.h>

#include "ChessScoreBoardMainFrame.h"
#include "../Logic/Score.hpp"

ChessScoreBoardMainFrame::ChessScoreBoardMainFrame(ScoreBoard *scoreBoard, wxWindow *parent)
        : scores{scoreBoard},
          MainFrame{parent}
{
    // setting proper font size for text windows
    auto font = this->TextScore->GetFont();
    font.SetFaceName("Arial");
    font.SetPointSize(36);
    this->TextScore->SetFont(font);

    font.SetPointSize(8);
    this->TextHistory->SetFont(font);

    // fill frame with data
    this->UpdateFrame();
}

void ChessScoreBoardMainFrame::OnButtonLossPlus(wxCommandEvent &event)
{
    this->scores->addScore(Score::Loss);
    this->UpdateFrame();
}

void ChessScoreBoardMainFrame::OnButtonDrawPlus(wxCommandEvent &event)
{
    this->scores->addScore(Score::Draw);
    this->UpdateFrame();
}

void ChessScoreBoardMainFrame::OnButtonWinPlus(wxCommandEvent &event)
{
    this->scores->addScore(Score::Win);
    this->UpdateFrame();
}

void ChessScoreBoardMainFrame::OnButtonUndo(wxCommandEvent &event)
{
    auto message = "Remove last result (" + this->scores->getLastScore() + ")?";
    auto response = wxMessageBox(message, "Confirm undo", wxYES_NO | wxYES_DEFAULT, this);
    if (response == wxYES)
    {
        this->scores->removeLastScore();
        this->UpdateFrame();
    }
}

void ChessScoreBoardMainFrame::OnButtonReset(wxCommandEvent &event)
{
    auto message = "Cannot undo reset action!\nAre you sure you want to proceed?";
    auto result = wxMessageBox(message, "Confirm reset", wxYES_NO | wxNO_DEFAULT, this);
    if (result == wxYES)
    {
        this->scores->reset();
        this->UpdateFrame();
    }
}

void ChessScoreBoardMainFrame::UpdateFrame()
{
    this->UpdateScoreWindow();

    this->UpdateHistoryWindow();

    this->AdjustButtonsAvailability();
}

void ChessScoreBoardMainFrame::AdjustButtonsAvailability() const
{
    if (this->scores->empty())
    {
        ButtonReset->Enable(false);
        ButtonUndo->Enable(false);
    }
    else
    {
        ButtonReset->Enable();
        ButtonUndo->Enable();
    }
}

void ChessScoreBoardMainFrame::UpdateHistoryWindow() const
{
    std::string history = this->scores->getHistory();

    TextHistory->SetValue(history);
}

void ChessScoreBoardMainFrame::UpdateScoreWindow() const
{
    std::string text = this->scores->getScores();
    TextScore->SetValue(text);

    // color the word "Score" in red
    wxTextAttr style;

    auto font = this->TextScore->GetFont();
    font.SetFaceName("Arial");
    font.SetPointSize(36);
    style.SetFont(font);

    style.SetTextColour(wxColour(255, 0, 0));
    TextScore->SetStyle(0, 8, style);

    style.SetTextColour(wxColour(0, 0, 0));
    TextScore->SetStyle(8, text.size(), style);
}

void ChessScoreBoardMainFrame::OnClose(wxCloseEvent &event)
{
    auto response = wxMessageBox("Are you sure you want to exit?", "Close", wxYES_NO | wxNO_DEFAULT, this);

    if (response == wxYES)
    {
        MainFrame::OnClose(event);
    }
}
