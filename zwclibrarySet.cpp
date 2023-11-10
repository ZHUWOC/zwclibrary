// zwclibrarySet.cpp : implementation of the CZwclibrarySet class
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "zwclibrarySet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZwclibrarySet implementation

IMPLEMENT_DYNAMIC(CZwclibrarySet, CRecordset)

CZwclibrarySet::CZwclibrarySet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CZwclibrarySet)
	m_id = _T("");
	m_psw = _T("");
	m_nFields = 2;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}

CString CZwclibrarySet::GetDefaultConnect()
{
	return _T("ODBC;DSN=library");
}

CString CZwclibrarySet::GetDefaultSQL()
{
	return _T("[dbo].[admin]");
}

void CZwclibrarySet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CZwclibrarySet)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Text(pFX, _T("[id]"), m_id);
	RFX_Text(pFX, _T("[psw]"), m_psw);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CZwclibrarySet diagnostics

#ifdef _DEBUG
void CZwclibrarySet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CZwclibrarySet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
