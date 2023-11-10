#if !defined(AFX_VIDIODLG_H__8F8E8689_691E_4CFD_AAE7_25B8D2638D5E__INCLUDED_)
#define AFX_VIDIODLG_H__8F8E8689_691E_4CFD_AAE7_25B8D2638D5E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// vidiodlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// vidiodlg dialog

class vidiodlg : public CDialog
{
// Construction
public:
	vidiodlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(vidiodlg)
	enum { IDD = IDD_DIALOG_VIDIO };
	CString	m_vid;
	CString	m_vlength;
	CString	m_vname;
	CString	m_vtitle;
	CString	m_vwriter;
	CString	m_vyear;
	CString	m_vgrade;
	//}}AFX_DATA
	CString grade;


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(vidiodlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(vidiodlg)
	afx_msg void OnSelchangeComboVgrade();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VIDIODLG_H__8F8E8689_691E_4CFD_AAE7_25B8D2638D5E__INCLUDED_)
