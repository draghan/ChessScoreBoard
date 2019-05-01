#ifndef __ChessScoreBoardMainFrame__
#define __ChessScoreBoardMainFrame__

#include <vector>

#include "generated.h"

#include "../Logic/Score.hpp"
#include "../Logic/ScoreBoard.hpp"


class ChessScoreBoardMainFrame: public MainFrame
{
public:
    explicit ChessScoreBoardMainFrame(ScoreBoard *scoreBoard, wxWindow *parent);

protected:
    void OnButtonLossPlus(wxCommandEvent &event) override;
    void OnButtonDrawPlus(wxCommandEvent &event) override;
    void OnButtonWinPlus(wxCommandEvent &event) override;
    void OnButtonReset(wxCommandEvent &event) override;
    void OnButtonUndo(wxCommandEvent &event) override;
    void OnClose(wxCloseEvent &event) override;
    void OnButtonSave(wxCommandEvent &event) override;

private:
    ScoreBoard *scores;

    void UpdateFrame();

    void UpdateScoreWindow() const;
    void UpdateHistoryWindow() const;
    void AdjustButtonsAvailability() const;
};

#endif // __ChessScoreBoardMainFrame__
