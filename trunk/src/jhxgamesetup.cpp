/*
//----------------------------------------------------------------------------\\
|| Name:        jhxgamesetup.cpp
|| Purpose:     jhXGameSetup - Main application file
|| Author:      Jahn Fuchs
|| SVN-ID:      $Id$
|| Copyright:   (c) Jahn Fuchs
|| Licence:     GNU GPL
\\---------------------------------------------------------------------------//
*/

// ----------------------------------------------------------------------------|
//   GCC implementation
// ----------------------------------------------------------------------------|

#ifdef __GNUG__
    #pragma implementation "jhxgamesetup.h"
#endif

// ----------------------------------------------------------------------------|
//   Standard wxWindows headers
// ----------------------------------------------------------------------------|

// For compilers that support precompilation -> include "wx/wxprec.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// For all others, include the necessary headers (this file is usually all you
// need because it includes almost all "standard" wxWindows headers)
#ifndef WX_PRECOMP
    #include "wx/wx.h"
#endif

// ----------------------------------------------------------------------------|
//   Header of this source file
// ----------------------------------------------------------------------------|

#include "jhxgamesetup.h"

// ----------------------------------------------------------------------------|
//   wx headers, wx/contrib headers, application headers
// ----------------------------------------------------------------------------|

#include "wx/image.h"               // wxImage
#include "wx/intl.h"				// Unterstützung für mehrere Sprachen 
		 							// mit gettext (.po/.mo - Dateien)
//#include "wx/file.h"				// wx I/O Funktionen

#include <wx/filesys.h>				// wx Filesystem
#include <wx/fs_zip.h>				// wx ZipHandler
  
#include "wx/xrc/xmlres.h"          // XML resouces

// ----------------------------------------------------------------------------|

#include "setupframe.h"				// Header for the MainFrame

// ----------------------------------------------------------------------------|
//   wxWindows macro: Declare the application.
// ----------------------------------------------------------------------------|

// Create a new application object: this macro to create application
// object during program execution 
IMPLEMENT_APP(MyApp)

//-----------------------------------------------------------------------------|
// Public methods
//-----------------------------------------------------------------------------|

// 'Main program' equivalent: the program execution "starts" here
bool MyApp::OnInit()
{
    // If there is any of a certain format of image in the XRC or XRS
    // resources -> load a handler for that image type. 
    // Look in wxImage::AddHandler() for all available ImageHandler
    // jhXGameSetup uses only some standard handlers
    wxImage::AddHandler(new wxXPMHandler);
    wxImage::AddHandler(new wxICOHandler);
    wxImage::AddHandler(new wxBMPHandler);
    wxImage::AddHandler(new wxPNGHandler);
    wxImage::AddHandler(new wxJPEGHandler);
    
    // load the ZipFSHandler for use with XRS resources
    wxFileSystem::AddHandler(new wxZipFSHandler);

    // Initialize all the XRC handlers. 
    /*wxXmlResource::Get()->InitAllHandlers();    
      
    // Load the frame from a XRC or XRS (zipped XRC) file
    // Depending on the commandline options
    wxXmlResource::Get()->Load(wxT("rc/menu.xrc"));
    // The toolbar
    
    //wxXmlResource::Get()->Load(wxT("rc/all.zip#zip:all.zip$._toolbar.xrc"));
	
    // Make an instance of your derived frame. Passing NULL (the default value 
    // of MyFrame's constructor is NULL) as the frame doesn't have a frame
    // since it is the first window. 
    jhXGameSetupFrame *setupframe = new jhXGameSetupFrame();
    
    // Show the setupframe.
    setupframe->Show(TRUE); */
    
    // Return TRUE -> tell program to continue 
    return TRUE;
}

