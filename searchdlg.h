#if !defined(AFX_SEARCHDLG_H__7BF8884C_C52C_4E5B_99E1_BA996624EAE1__INCLUDED_)
#define AFX_SEARCHDLG_H__7BF8884C_C52C_4E5B_99E1_BA996624EAE1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// searchdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// searchdlg dialog

class searchdlg : public CDialog
{
// Construction
public:
	searchdlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(searchdlg)
	enum { IDD = IDD_DIALOG_SEAR };
	CString	m_searid;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(searchdlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(searchdlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SEARCHDLG_H__7BF8884C_C52C_4E5B_99E1_BA996624EAE1__INCLUDED_)
