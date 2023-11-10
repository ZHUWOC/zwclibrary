#if !defined(AFX_VIDIOSET_H__17BFED2E_ABD1_4745_BE07_3CEA759BA0EF__INCLUDED_)
#define AFX_VIDIOSET_H__17BFED2E_ABD1_4745_BE07_3CEA759BA0EF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// vidioset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// vidioset recordset

class vidioset : public CRecordset
{
public:
	vidioset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(vidioset)

// Field/Param Data
	//{{AFX_FIELD(vidioset, CRecordset)
	CString	m_id;
	CString	m_tittle;
	CString	m_writer;
	CString	m_grade;
	CString	m_name;
	CString	m_year;
	CString	m_length;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(vidioset)
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

#endif // !defined(AFX_VIDIOSET_H__17BFED2E_ABD1_4745_BE07_3CEA759BA0EF__INCLUDED_)
