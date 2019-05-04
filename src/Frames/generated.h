///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/textctrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxPanel* m_panel1;
		wxTextCtrl* TextScore;
		wxTextCtrl* TextHistory;
		wxPanel* m_panel2;
		wxButton* ButtonWinPlus;
		wxButton* ButtonDrawPlus;
		wxButton* ButtonLossPlus;
		wxButton* ButtonReset;
		wxButton* ButtonUndo;
		wxButton* ButtonSave;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnButtonWinPlus( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonDrawPlus( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonLossPlus( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonUndo( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonSave( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Chess Score Board"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX );

		~MainFrame();

};

