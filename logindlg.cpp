// logindlg.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "logindlg.h"
#include "information.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// logindlg dialog


logindlg::logindlg(CWnd* pParent /*=NULL*/)
	: CDialog(logindlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(logindlg)
	m_psw = _T("");
	//}}AFX_DATA_INIT
}


void logindlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(logindlg)
	DDX_Control(pDX, IDC_USER, m_user);
	DDX_Text(pDX, IDC_PSW, m_psw);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(logindlg, CDialog)
	//{{AFX_MSG_MAP(logindlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// logindlg message handlers

void logindlg::OnOK() 
{
	// TODO: Add extra validation here
	CDatabase m_database;
	CRecordset *m_dbrs; //记录集类的指针
	CString id;
	CString psw;
	GetDlgItem(IDC_USER)->GetWindowText(id);//把编辑框IDC_USER输入的值赋给id
	GetDlgItem(IDC_PSW)->GetWindowText(psw);//
	if((id.GetLength()==0)||(psw.GetLength()==0))
	{
		AfxMessageBox("请输入账户密码");
	}
	else{
	
		m_database.Open(_T("library"),FALSE);//建立与数据源library的连接
        CString sql;
	    sql.Format("select * from admin where id='%s' and psw= '%s'",id,psw);//构建SQL语句
		m_dbrs=new CRecordset(&m_database);	 
		m_dbrs->Open(CRecordset::forwardOnly,sql, CRecordset::readOnly);//
        if(m_dbrs->GetRecordCount()!=0)
		{
           	MessageBox("登录成功!欢迎使用媒体库管理系统","小猪系统欢迎您");
			 this->ShowWindow(SW_HIDE);//当前界面隐藏
           information dlg;   //需要添加该C***Dlg.h头文件，否则编译通不过
           dlg.DoModal();
           this->ShowWindow(SW_SHOW);

		}
		else
		{
			AfxMessageBox("登录失败!");
		}
		}
	CDialog::OnOK();
}

//DEL void logindlg::Listzwc(CString strSQLB, CString strSQLV, CSTRING strSQLP)
//DEL {
//DEL 
//DEL }
