// zwclibraryView.cpp : implementation of the CZwclibraryView class
//

#include "stdafx.h"
#include "zwclibrary.h"

#include "zwclibrarySet.h"
#include "zwclibraryDoc.h"
#include "zwclibraryView.h"
#include "logindlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryView

IMPLEMENT_DYNCREATE(CZwclibraryView, CRecordView)

BEGIN_MESSAGE_MAP(CZwclibraryView, CRecordView)
	//{{AFX_MSG_MAP(CZwclibraryView)
	ON_COMMAND(ID_LOGINDLG, OnLogindlg)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryView construction/destruction

CZwclibraryView::CZwclibraryView()
	: CRecordView(CZwclibraryView::IDD)
{
	//{{AFX_DATA_INIT(CZwclibraryView)
		// NOTE: the ClassWizard will add member initialization here
	m_pSet = NULL;
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CZwclibraryView::~CZwclibraryView()
{
}

void CZwclibraryView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZwclibraryView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CZwclibraryView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CZwclibraryView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_zwclibrarySet;
	CRecordView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryView printing

BOOL CZwclibraryView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CZwclibraryView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CZwclibraryView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryView diagnostics

#ifdef _DEBUG
void CZwclibraryView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CZwclibraryView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CZwclibraryDoc* CZwclibraryView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CZwclibraryDoc)));
	return (CZwclibraryDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CZwclibraryView database support
CRecordset* CZwclibraryView::OnGetRecordset()
{
	return m_pSet;
}


/////////////////////////////////////////////////////////////////////////////
// CZwclibraryView message handlers

void CZwclibraryView::OnLogindlg() 
{
	// TODO: Add your command handler code here
	logindlg lll;
	lll.DoModal();
}
