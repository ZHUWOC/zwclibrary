// zwclibrarySet.h : interface of the CZwclibrarySet class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_ZWCLIBRARYSET_H__732159BA_2E56_4688_90F4_5C9BD8950E4B__INCLUDED_)
#define AFX_ZWCLIBRARYSET_H__732159BA_2E56_4688_90F4_5C9BD8950E4B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CZwclibrarySet : public CRecordset
{
public:
	CZwclibrarySet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CZwclibrarySet)

// Field/Param Data
	//{{AFX_FIELD(CZwclibrarySet, CRecordset)
	CString	m_id;
	CString	m_psw;
	//}}AFX_FIELD

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZwclibrarySet)
	public:
	virtual CString GetDefaultConnect();	// Default connection string
	virtual CString GetDefaultSQL(); 	// default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZWCLIBRARYSET_H__732159BA_2E56_4688_90F4_5C9BD8950E4B__INCLUDED_)

