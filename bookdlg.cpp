// bookdlg.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "bookdlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// bookdlg dialog


bookdlg::bookdlg(CWnd* pParent /*=NULL*/)
	: CDialog(bookdlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(bookdlg)
	m_bid = _T("");
	m_bisnb = _T("");
	m_boutput = _T("");
	m_bpage = _T("");
	m_btitle = _T("");
	m_bwriter = _T("");
	m_bgrade = _T("");
	//}}AFX_DATA_INIT
}


void bookdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(bookdlg)
	DDX_Text(pDX, IDC_EDIT_BID, m_bid);
	DDX_Text(pDX, IDC_EDIT_BISNB, m_bisnb);
	DDX_Text(pDX, IDC_EDIT_BOUTPUT, m_boutput);
	DDX_Text(pDX, IDC_EDIT_BPAGE, m_bpage);
	DDX_Text(pDX, IDC_EDIT_BTITLE, m_btitle);
	DDX_Text(pDX, IDC_EDIT_BWRITER, m_bwriter);
	DDX_CBString(pDX, IDC_COMBO_BGRADE, m_bgrade);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(bookdlg, CDialog)
	//{{AFX_MSG_MAP(bookdlg)
	ON_CBN_SELCHANGE(IDC_COMBO_BGRADE, OnSelchangeComboBgrade)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// bookdlg message handlers

void bookdlg::OnSelchangeComboBgrade() 
{
	// TODO: Add your control notification handler code here
	
}

void bookdlg::OnOK() 
{
	// TODO: Add extra validation here
	UpdateData(TRUE);
	CDialog::OnOK();
}
