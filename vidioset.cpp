// vidioset.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "vidioset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// vidioset

IMPLEMENT_DYNAMIC(vidioset, CRecordset)

vidioset::vidioset(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(vidioset)
	m_id = _T("");
	m_tittle = _T("");
	m_writer = _T("");
	m_grade = _T("");
	m_name = _T("");
	m_year = _T("");
	m_length = _T("");
	m_nFields = 7;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString vidioset::GetDefaultConnect()
{
	return _T("ODBC;DSN=library");
}

CString vidioset::GetDefaultSQL()
{
	return _T("[dbo].[vidio]");
}

void vidioset::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(vidioset)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[tittle]"), m_tittle);
	RFX_Text(pFX, _T("[writer]"), m_writer);
	RFX_Text(pFX, _T("[grade]"), m_grade);
	RFX_Text(pFX, _T("[name]"), m_name);
	RFX_Text(pFX, _T("[year]"), m_year);
	RFX_Text(pFX, _T("[length]"), m_length);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// vidioset diagnostics

#ifdef _DEBUG
void vidioset::AssertValid() const
{
	CRecordset::AssertValid();
}

void vidioset::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
