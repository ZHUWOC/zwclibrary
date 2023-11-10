#if !defined(AFX_PICTUREDLG_H__3B8759E6_3C6B_4F53_8EBC_BF8F414ACE5B__INCLUDED_)
#define AFX_PICTUREDLG_H__3B8759E6_3C6B_4F53_8EBC_BF8F414ACE5B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// picturedlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// picturedlg dialog

class picturedlg : public CDialog
{
// Construction
public:
	picturedlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(picturedlg)
	enum { IDD = IDD_DIALOG_PICTURE };
	CString	m_pcountry;
	CString	m_pid;
	CString	m_ptitle;
	CString	m_pwidth;
	CString	m_pwriter;
	CString	m_pgrade;
	CString	m_pleng;
	//}}AFX_DATA
	CString grade;


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(picturedlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(picturedlg)
	afx_msg void OnSelchangeComboPic();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PICTUREDLG_H__3B8759E6_3C6B_4F53_8EBC_BF8F414ACE5B__INCLUDED_)
