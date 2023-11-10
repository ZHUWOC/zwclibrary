// picturedlg.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "picturedlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// picturedlg dialog


picturedlg::picturedlg(CWnd* pParent /*=NULL*/)
	: CDialog(picturedlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(picturedlg)
	m_pcountry = _T("");
	m_pid = _T("");
	m_ptitle = _T("");
	m_pwidth = _T("");
	m_pwriter = _T("");
	m_pgrade = _T("");
	m_pleng = _T("");
	//}}AFX_DATA_INIT
}


void picturedlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(picturedlg)
	DDX_Text(pDX, IDC_EDIT_PCOUNTRY, m_pcountry);
	DDX_Text(pDX, IDC_EDIT_PID, m_pid);
	DDX_Text(pDX, IDC_EDIT_PTITL, m_ptitle);
	DDX_Text(pDX, IDC_EDIT_PWIDTH, m_pwidth);
	DDX_Text(pDX, IDC_EDIT_PWRI, m_pwriter);
	DDX_CBString(pDX, IDC_COMBO_PIC, m_pgrade);
	DDX_Text(pDX, IDC_EDIT_PLENGTH, m_pleng);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(picturedlg, CDialog)
	//{{AFX_MSG_MAP(picturedlg)
	ON_CBN_SELCHANGE(IDC_COMBO_PIC, OnSelchangeComboPic)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// picturedlg message handlers

void picturedlg::OnSelchangeComboPic() 
{
	// TODO: Add your control notification handler code here

}

void picturedlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
