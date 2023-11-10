// bookset.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "bookset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// bookset

IMPLEMENT_DYNAMIC(bookset, CRecordset)

bookset::bookset(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(bookset)
	m_id = _T("");
	m_tittle = _T("");
	m_writer = _T("");
	m_grade = _T("");
	m_output = _T("");
	m_isbn = _T("");
	m_page = _T("");
	m_nFields = 7;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString bookset::GetDefaultConnect()
{
	return _T("ODBC;DSN=library");
}

CString bookset::GetDefaultSQL()
{
	return _T("[dbo].[books]");
}

void bookset::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(bookset)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[tittle]"), m_tittle);
	RFX_Text(pFX, _T("[writer]"), m_writer);
	RFX_Text(pFX, _T("[grade]"), m_grade);
	RFX_Text(pFX, _T("[output]"), m_output);
	RFX_Text(pFX, _T("[isbn]"), m_isbn);
	RFX_Text(pFX, _T("[page]"), m_page);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// bookset diagnostics

#ifdef _DEBUG
void bookset::AssertValid() const
{
	CRecordset::AssertValid();
}

void bookset::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
