// zwclibraryView.h : interface of the CZwclibraryView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZWCLIBRARYVIEW_H__802112E6_81FD_47C2_A86B_5D14F5255C9B__INCLUDED_)
#define AFX_ZWCLIBRARYVIEW_H__802112E6_81FD_47C2_A86B_5D14F5255C9B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CZwclibrarySet;

class CZwclibraryView : public CRecordView
{
protected: // create from serialization only
	CZwclibraryView();
	DECLARE_DYNCREATE(CZwclibraryView)

public:
	//{{AFX_DATA(CZwclibraryView)
	enum{ IDD = IDD_ZWCLIBRARY_FORM };
	CZwclibrarySet* m_pSet;
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CZwclibraryDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZwclibraryView)
	public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CZwclibraryView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CZwclibraryView)
	afx_msg void OnLogindlg();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in zwclibraryView.cpp
inline CZwclibraryDoc* CZwclibraryView::GetDocument()
   { return (CZwclibraryDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZWCLIBRARYVIEW_H__802112E6_81FD_47C2_A86B_5D14F5255C9B__INCLUDED_)
