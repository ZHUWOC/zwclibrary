// pictureset.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "pictureset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// pictureset

IMPLEMENT_DYNAMIC(pictureset, CRecordset)

pictureset::pictureset(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(pictureset)
	m_id = _T("");
	m_tittle = _T("");
	m_writer = _T("");
	m_grade = _T("");
	m_country = _T("");
	m_len = 0;
	m_wid = 0;
	m_nFields = 7;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString pictureset::GetDefaultConnect()
{
	return _T("ODBC;DSN=library");
}

CString pictureset::GetDefaultSQL()
{
	return _T("[dbo].[picture]");
}

void pictureset::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(pictureset)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[tittle]"), m_tittle);
	RFX_Text(pFX, _T("[writer]"), m_writer);
	RFX_Text(pFX, _T("[grade]"), m_grade);
	RFX_Text(pFX, _T("[country]"), m_country);
	RFX_Long(pFX, _T("[len]"), m_len);
	RFX_Long(pFX, _T("[wid]"), m_wid);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// pictureset diagnostics

#ifdef _DEBUG
void pictureset::AssertValid() const
{
	CRecordset::AssertValid();
}

void pictureset::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
