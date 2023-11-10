#if !defined(AFX_LOGINDLG_H__B63B1A4E_4414_4346_933E_B846C6968356__INCLUDED_)
#define AFX_LOGINDLG_H__B63B1A4E_4414_4346_933E_B846C6968356__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// logindlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// logindlg dialog

class logindlg : public CDialog
{
// Construction
public:
	logindlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(logindlg)
	enum { IDD = IDD_DIALOG_LODIN };
	CComboBox	m_user;
	CString	m_psw;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(logindlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(logindlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGINDLG_H__B63B1A4E_4414_4346_933E_B846C6968356__INCLUDED_)
