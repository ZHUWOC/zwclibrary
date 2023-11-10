// vidiodlg.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "vidiodlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// vidiodlg dialog


vidiodlg::vidiodlg(CWnd* pParent /*=NULL*/)
	: CDialog(vidiodlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(vidiodlg)
	m_vid = _T("");
	m_vlength = _T("");
	m_vname = _T("");
	m_vtitle = _T("");
	m_vwriter = _T("");
	m_vyear = _T("");
	m_vgrade = _T("");
	//}}AFX_DATA_INIT
}


void vidiodlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(vidiodlg)
	DDX_Text(pDX, IDC_EDIT_VID, m_vid);
	DDX_Text(pDX, IDC_EDIT_VLENGTH, m_vlength);
	DDX_Text(pDX, IDC_EDIT_VNAME, m_vname);
	DDX_Text(pDX, IDC_EDIT_VTITLE, m_vtitle);
	DDX_Text(pDX, IDC_EDIT_VWRITER, m_vwriter);
	DDX_Text(pDX, IDC_EDIT_VYEAR, m_vyear);
	DDX_CBString(pDX, IDC_COMBO_VGRADE, m_vgrade);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(vidiodlg, CDialog)
	//{{AFX_MSG_MAP(vidiodlg)
	ON_CBN_SELCHANGE(IDC_COMBO_VGRADE, OnSelchangeComboVgrade)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// vidiodlg message handlers

void vidiodlg::OnSelchangeComboVgrade() 
{
	// TODO: Add your control notification handler code here

	
}

void vidiodlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
