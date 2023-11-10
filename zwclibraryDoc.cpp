// zwclibraryDoc.cpp : implementation of the CZwclibraryDoc class
//

#include "stdafx.h"
#include "zwclibrary.h"

#include "zwclibrarySet.h"
#include "zwclibraryDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryDoc

IMPLEMENT_DYNCREATE(CZwclibraryDoc, CDocument)

BEGIN_MESSAGE_MAP(CZwclibraryDoc, CDocument)
	//{{AFX_MSG_MAP(CZwclibraryDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryDoc construction/destruction

CZwclibraryDoc::CZwclibraryDoc()
{
	// TODO: add one-time construction code here

}

CZwclibraryDoc::~CZwclibraryDoc()
{
}

BOOL CZwclibraryDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CZwclibraryDoc diagnostics

#ifdef _DEBUG
void CZwclibraryDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CZwclibraryDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryDoc commands
