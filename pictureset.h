#if !defined(AFX_PICTURESET_H__AC526E25_39FC_45DF_8C06_CE6B186CE2BF__INCLUDED_)
#define AFX_PICTURESET_H__AC526E25_39FC_45DF_8C06_CE6B186CE2BF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// pictureset.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// pictureset recordset

class pictureset : public CRecordset
{
public:
	pictureset(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(pictureset)

// Field/Param Data
	//{{AFX_FIELD(pictureset, CRecordset)
	CString	m_id;
	CString	m_tittle;
	CString	m_writer;
	CString	m_grade;
	CString	m_country;
	long	m_len;
	long	m_wid;
	//}}AFX_FIELD


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(pictureset)
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

#endif // !defined(AFX_PICTURESET_H__AC526E25_39FC_45DF_8C06_CE6B186CE2BF__INCLUDED_)
