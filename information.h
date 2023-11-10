#if !defined(AFX_INFORMATION_H__AA6FBF6D_C5EE_4D1A_A8B6_180CE984FD29__INCLUDED_)
#define AFX_INFORMATION_H__AA6FBF6D_C5EE_4D1A_A8B6_180CE984FD29__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// information.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// information dialog

class information : public CDialog
{
// Construction
public:
	void Listzwc(CString strSQLB,CString strSQLV,CString strSQLP);
	information(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(information)
	enum { IDD = IDD_DIALOG_HOME };
	CComboBox	m_type;
	CListCtrl	m_zwclist;
	int		m_counter;
	int		m_counterb;
	int		m_counterp;
	int		m_counyerv;
	//}}AFX_DATA
	CString type;
	CString id;
	CString title;
	CString writer;
	CString grade;

	CString output;
	CString isnb;
	CString page;
    CString idd;
	CString name;
	CString year;
	CString length;

	CString country;
	CString len;
	CString wid;




// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(information)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(information)
	virtual BOOL OnInitDialog();
	afx_msg void OnButtonAdd();
	afx_msg void OnSelchangeComboType();
	afx_msg void OnButtonChange();
	afx_msg void OnButtonSearch();
	afx_msg void OnButtonDelete();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnButtonRefer();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFORMATION_H__AA6FBF6D_C5EE_4D1A_A8B6_180CE984FD29__INCLUDED_)
