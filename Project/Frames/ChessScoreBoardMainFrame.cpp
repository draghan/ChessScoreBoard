#include <numeric>
#include <sstream>
#include <iomanip>
#include <wx/wx.h>
#include "ChessScoreBoardMainFrame.h"
#include "../Logic/Score.hpp"
#include <algorithm>
ChessScoreBoardMainFrame::ChessScoreBoardMainFrame(wxWindow *parent)
        : MainFrame(parent)
{
    this->UpdateText();
    wxTextAttr style;
    this->TextScore->GetStyle(0, style);
}

void ChessScoreBoardMainFrame::OnButtonLosePlus(wxCommandEvent &event)
{
    this->AddScore(Score::Lose);
    this->UpdateText();
}

void ChessScoreBoardMainFrame::OnButtonDrawPlus(wxCommandEvent &event)
{
    this->AddScore(Score::Draw);
    this->UpdateText();
}

void ChessScoreBoardMainFrame::OnButtonWinPlus(wxCommandEvent &event)
{
    this->AddScore(Score::Win);
    this->UpdateText();
}

void ChessScoreBoardMainFrame::OnButtonReset(wxCommandEvent &event)
{
    auto result = wxMessageBox("Cannot undo reset action! Are you sure you want to proceed?", "Confirm reset", wxYES_NO | wxNO_DEFAULT, this);
    if(result == wxYES)
    {
        this->Scores.clear();
        this->UpdateText();
    }
}

void ChessScoreBoardMainFrame::UpdateText()
{
    float scores = std::accumulate(this->Scores.begin(), this->Scores.end(), 0.0f);
    std::stringstream ss;
    ss.setf(std::ios::fixed, std::ios::floatfield);
    ss.precision(1);
    ss << "\nScore: " << scores << " / " << this->Scores.size();

    std::string text = ss.str();
    this->TextScore->SetValue(text);

    wxTextAttr style;
    this->TextScore->GetStyle(0, style);
    style.SetTextColour(wxColour(255, 0, 0));
    this->TextScore->SetStyle(0, 8, style);
    style.SetTextColour(wxColour(0, 0, 0));
    this->TextScore->SetStyle(8, text.size(), style);

    std::string history;
    bool first = true;

    std::for_each(this->Scores.rbegin(), this->Scores.rend(), [&](const auto &score)
    {
        if(first)
        {
            first = false;
        }
        else
        {
            history += ", ";
        }
        std::string scoreString = score;
        history += std::toupper(scoreString[0]);
    });
    this->TextHistory->SetValue(history);


    if(this->Scores.size() > 0)
    {
        this->ButtonReset->Enable();
        this->ButtonUndo->Enable();
    }
    else
    {
        this->ButtonReset->Enable(false);
        this->ButtonUndo->Enable(false);
    }
}

void ChessScoreBoardMainFrame::AddScore(Score result)
{
    this->Scores.push_back(result);
}

void ChessScoreBoardMainFrame::RemoveScore()
{
    if(this->Scores.size() > 0)
    {
        this->Scores.pop_back();
    }
}

void ChessScoreBoardMainFrame::OnButtonUndo(wxCommandEvent &event)
{
    using namespace std::string_literals;
    std::string score = *(this->Scores.end()-1);
    if(wxMessageBox("Undo " + score + "?", "Confirm undo", wxYES_NO | wxYES_DEFAULT, this) == wxYES)
    {
        this->RemoveScore();
        this->UpdateText();
    }
}
