/*
//---------------------------------------------------------------------------\\
|| Name:        jhxgamesetup.h
|| Purpose:     jhXGameSetup - header for jhxgamesetup.cpp
|| Author:      Jahn Fuchs
|| SVN-ID:      $Id$
|| Copyright:   (c) Jahn Fuchs
|| Licence:     GNU GPL
\\--------------------------------------------------------------------------//
*/
//-----------------------------------------------------------------------------
// Begin single inclusion of this .h file condition
//-----------------------------------------------------------------------------

#ifndef _JHXGAMESETUP_H_
#define _JHXGAMESETUP_H_

//-----------------------------------------------------------------------------
// GCC interface
//-----------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(__APPLE__)
    #pragma interface "jhxgamesetup.h"
#endif

//-----------------------------------------------------------------------------
// Headers
//-----------------------------------------------------------------------------

#include "wx/app.h"             // wxApp

//-----------------------------------------------------------------------------
// Class definition: jhXSetupApp
//-----------------------------------------------------------------------------

// Define a new application type, each program should derive a class from wxApp
class jhXSetupApp : public wxApp
{

public:

    // Override base class virtuals:
    // wxApp::OnInit() is called on application startup and is a good place 
    // for the app initialization (doing it here and not in the ctor 
    // allows to have an error return: if OnInit() returns false, the 
    // application terminates)
    virtual bool OnInit();
    
};

//-----------------------------------------------------------------------------
// End single inclusion of this .h file condition
//-----------------------------------------------------------------------------

#endif  //_JHXGAMESETUP_H_
