#if !defined(AFX_BOOKDLG_H__77FDBF4A_FC56_485B_8BE2_4C6331A26822__INCLUDED_)
#define AFX_BOOKDLG_H__77FDBF4A_FC56_485B_8BE2_4C6331A26822__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// bookdlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// bookdlg dialog

class bookdlg : public CDialog
{
// Construction
public:
	bookdlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(bookdlg)
	enum { IDD = IDD_DIALOG_BOOK };
	CString	m_bid;
	CString	m_bisnb;
	CString	m_boutput;
	CString	m_bpage;
	CString	m_btitle;
	CString	m_bwriter;
	CString	m_bgrade;
	//}}AFX_DATA
	
	CString grade;
	


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(bookdlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(bookdlg)
	afx_msg void OnSelchangeComboBgrade();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKDLG_H__77FDBF4A_FC56_485B_8BE2_4C6331A26822__INCLUDED_)
