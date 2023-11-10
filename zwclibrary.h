// zwclibrary.h : main header file for the ZWCLIBRARY application
//

#if !defined(AFX_ZWCLIBRARY_H__BA402EA7_C78A_4E5E_B020_5AEC0D400185__INCLUDED_)
#define AFX_ZWCLIBRARY_H__BA402EA7_C78A_4E5E_B020_5AEC0D400185__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryApp:
// See zwclibrary.cpp for the implementation of this class
//

class CZwclibraryApp : public CWinApp
{
public:
	CZwclibraryApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZwclibraryApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CZwclibraryApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZWCLIBRARY_H__BA402EA7_C78A_4E5E_B020_5AEC0D400185__INCLUDED_)
