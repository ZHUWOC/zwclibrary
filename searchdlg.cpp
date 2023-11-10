// searchdlg.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "searchdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// searchdlg dialog


searchdlg::searchdlg(CWnd* pParent /*=NULL*/)
	: CDialog(searchdlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(searchdlg)
	m_searid = _T("");
	//}}AFX_DATA_INIT
}


void searchdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(searchdlg)
	DDX_Text(pDX, IDC_EDIT2, m_searid);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(searchdlg, CDialog)
	//{{AFX_MSG_MAP(searchdlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// searchdlg message handlers

void searchdlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
