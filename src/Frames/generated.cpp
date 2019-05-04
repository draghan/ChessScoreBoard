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

	m_panel1 = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	TextScore = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_MULTILINE|wxTE_READONLY|wxTE_RICH );
	TextScore->Enable( false );

	bSizer61->Add( TextScore, 5, wxALL|wxEXPAND, 5 );

	TextHistory = new wxTextCtrl( m_panel1, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,40 ), wxHSCROLL|wxTE_LEFT|wxTE_READONLY|wxTE_RICH );
	bSizer61->Add( TextHistory, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	m_panel2 = new wxPanel( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer411;
	bSizer411 = new wxBoxSizer( wxHORIZONTAL );

	ButtonWinPlus = new wxButton( m_panel2, wxID_ANY, _("Win"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer411->Add( ButtonWinPlus, 1, wxALL|wxEXPAND, 5 );

	ButtonDrawPlus = new wxButton( m_panel2, wxID_ANY, _("Draw"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer411->Add( ButtonDrawPlus, 1, wxALL|wxEXPAND, 5 );

	ButtonLossPlus = new wxButton( m_panel2, wxID_ANY, _("Loss"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer411->Add( ButtonLossPlus, 1, wxALL|wxEXPAND, 5 );


	m_panel2->SetSizer( bSizer411 );
	m_panel2->Layout();
	bSizer411->Fit( m_panel2 );
	bSizer41->Add( m_panel2, 1, wxEXPAND, 5 );


	bSizer21->Add( bSizer41, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer62;
	bSizer62 = new wxBoxSizer( wxHORIZONTAL );

	ButtonReset = new wxButton( m_panel1, wxID_ANY, _("Reset Score"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( ButtonReset, 1, wxALL|wxEXPAND, 5 );

	ButtonUndo = new wxButton( m_panel1, wxID_ANY, _("Undo"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( ButtonUndo, 0, wxALL|wxEXPAND, 5 );

	ButtonSave = new wxButton( m_panel1, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer62->Add( ButtonSave, 0, wxALL, 5 );


	bSizer21->Add( bSizer62, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer21, 1, wxEXPAND, 5 );


	m_panel1->SetSizer( bSizer61 );
	m_panel1->Layout();
	bSizer61->Fit( m_panel1 );
	bSizer1->Add( m_panel1, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrame::OnClose ) );
	ButtonWinPlus->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonWinPlus ), NULL, this );
	ButtonDrawPlus->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonDrawPlus ), NULL, this );
	ButtonLossPlus->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonLossPlus ), NULL, this );
	ButtonReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonReset ), NULL, this );
	ButtonUndo->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonUndo ), NULL, this );
	ButtonSave->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonSave ), NULL, this );
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrame::OnClose ) );
	ButtonWinPlus->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonWinPlus ), NULL, this );
	ButtonDrawPlus->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonDrawPlus ), NULL, this );
	ButtonLossPlus->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonLossPlus ), NULL, this );
	ButtonReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonReset ), NULL, this );
	ButtonUndo->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonUndo ), NULL, this );
	ButtonSave->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrame::OnButtonSave ), NULL, this );

}
