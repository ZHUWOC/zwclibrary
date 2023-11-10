#if !defined(AFX_BOOKSET_H__AD11949C_C152_4FF0_B1DE_6400A3A59673__INCLUDED_)
#define AFX_BOOKSET_H__AD11949C_C152_4FF0_B1DE_6400A3A59673__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// bookset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// bookset recordset

class bookset : public CRecordset
{
public:
	bookset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(bookset)

// Field/Param Data
	//{{AFX_FIELD(bookset, CRecordset)
	CString	m_id;
	CString	m_tittle;
	CString	m_writer;
	CString	m_grade;
	CString	m_output;
	CString	m_isbn;
	CString	m_page;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(bookset)
	public:
	virtual CString GetDefaultConnect();    // Default connection string
	virtual CString GetDefaultSQL();    // Default SQL for Recordset
	virtual void DoFieldExchange(CFieldExchange* pFX);  // RFX support
	//}}AFX_VIRTUAL

// Implementation
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BOOKSET_H__AD11949C_C152_4FF0_B1DE_6400A3A59673__INCLUDED_)
