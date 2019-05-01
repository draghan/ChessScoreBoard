///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "generated.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	TextScore = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH );
	TextScore->SetFont( wxFont( 36, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );
	TextScore->Enable( false );

	bSizer1->Add( TextScore, 4, wxALL|wxEXPAND, 5 );

	TextHistory = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,40 ), wxHSCROLL|wxTE_LEFT|wxTE_READONLY|wxTE_RICH );
	TextHistory->SetFont( wxFont( 8, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer1->Add( TextHistory, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	ButtonWinPlus = new wxButton( this, wxID_ANY, _("Win"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	bSizer4->Add( ButtonWinPlus, 1, wxALL|wxEXPAND, 5 );

	ButtonDrawPlus = new wxButton( this, wxID_ANY, _("Draw"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	bSizer4->Add( ButtonDrawPlus, 1, wxALL|wxEXPAND, 5 );

	ButtonLosePlus = new wxButton( this, wxID_ANY, _("Lose"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	bSizer4->Add( ButtonLosePlus, 1, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	ButtonReset = new wxButton( this, wxID_ANY, _("Reset Score"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	bSizer6->Add( ButtonReset, 1, wxALL|wxEXPAND, 5 );

	ButtonUndo = new wxButton( this, wxID_ANY, _("Undo"), wxDefaultPosition, wxDefaultSize, 0|wxTAB_TRAVERSAL );
	bSizer6->Add( ButtonUndo, 0, wxALL|wxEXPAND, 5 );


	bSizer2->Add( bSizer6, 1, wxEXPAND, 5 );


	bSizer1->Add( bSizer2, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	ButtonWinPlus->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonWinPlus ), NULL, this );
	ButtonDrawPlus->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonDrawPlus ), NULL, this );
	ButtonLosePlus->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonLosePlus ), NULL, this );
	ButtonReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonReset ), NULL, this );
	ButtonUndo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonUndo ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	ButtonWinPlus->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonWinPlus ), NULL, this );
	ButtonDrawPlus->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonDrawPlus ), NULL, this );
	ButtonLosePlus->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonLosePlus ), NULL, this );
	ButtonReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonReset ), NULL, this );
	ButtonUndo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonUndo ), NULL, this );

}
