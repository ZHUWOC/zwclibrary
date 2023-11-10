// zwclibraryDoc.h : interface of the CZwclibraryDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZWCLIBRARYDOC_H__7E444FE9_5A37_470C_B23B_A69F051898FE__INCLUDED_)
#define AFX_ZWCLIBRARYDOC_H__7E444FE9_5A37_470C_B23B_A69F051898FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "zwclibrarySet.h"


class CZwclibraryDoc : public CDocument
{
protected: // create from serialization only
	CZwclibraryDoc();
	DECLARE_DYNCREATE(CZwclibraryDoc)

// Attributes
public:
	CZwclibrarySet m_zwclibrarySet;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZwclibraryDoc)
	public:
	virtual BOOL OnNewDocument();
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CZwclibraryDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CZwclibraryDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZWCLIBRARYDOC_H__7E444FE9_5A37_470C_B23B_A69F051898FE__INCLUDED_)
