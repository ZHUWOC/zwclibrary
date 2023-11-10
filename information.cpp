// information.cpp : implementation file
//

#include "stdafx.h"
#include "zwclibrary.h"
#include "information.h"
#include "bookset.h"
#include "vidioset.h"
#include "pictureset.h"
#include "bookdlg.h"
#include "vidiodlg.h"
#include "picturedlg.h"
#include "searchdlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// information dialog


information::information(CWnd* pParent /*=NULL*/)
	: CDialog(information::IDD, pParent)
{
	//{{AFX_DATA_INIT(information)
	m_counter = 0;
	m_counterb = 0;
	m_counterp = 0;
	m_counyerv = 0;
	//}}AFX_DATA_INIT
}


void information::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(information)
	DDX_Control(pDX, IDC_COMBO_TYPE, m_type);
	DDX_Control(pDX, IDC_LIST_HOME, m_zwclist);
	DDX_Text(pDX, IDC_EDIT1, m_counter);
	DDX_Text(pDX, IDC_EDIT_B, m_counterb);
	DDX_Text(pDX, IDC_EDIT_P, m_counterp);
	DDX_Text(pDX, IDC_EDIT_V, m_counyerv);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(information, CDialog)
	//{{AFX_MSG_MAP(information)
	ON_BN_CLICKED(IDC_BUTTON_ADD, OnButtonAdd)
	ON_CBN_SELCHANGE(IDC_COMBO_TYPE, OnSelchangeComboType)
	ON_BN_CLICKED(IDC_BUTTON_CHANGE, OnButtonChange)
	ON_BN_CLICKED(IDC_BUTTON_SEARCH, OnButtonSearch)
	ON_BN_CLICKED(IDC_BUTTON_DELETE, OnButtonDelete)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON_REFER, OnButtonRefer)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// information message handlers

BOOL information::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	m_zwclist.SetExtendedStyle(LVS_EX_GRIDLINES|LVS_EX_FULLROWSELECT);
	m_zwclist.SetBkColor(RGB(177,151,240));
	m_zwclist.SetTextColor(RGB(0,0,0));
	m_zwclist.SetTextBkColor(RGB(177,151,110));
	m_zwclist.InsertColumn(0,"���",LVCFMT_LEFT,77);
	m_zwclist.InsertColumn(1,"����",LVCFMT_LEFT,158);
	m_zwclist.InsertColumn(2,"����",LVCFMT_LEFT,80);
	m_zwclist.InsertColumn(3,"����",LVCFMT_LEFT,55);
	m_zwclist.InsertColumn(4,"������",LVCFMT_LEFT,130);
	m_zwclist.InsertColumn(5,"isnb��",LVCFMT_LEFT,85);
	m_zwclist.InsertColumn(6,"ҳ��",LVCFMT_LEFT,60);
	m_zwclist.InsertColumn(7,"��Ʒ������",LVCFMT_LEFT,85);
	m_zwclist.InsertColumn(8,"��Ʒ���",LVCFMT_LEFT,80);
	m_zwclist.InsertColumn(9,"ʱ��",LVCFMT_LEFT,80);
	m_zwclist.InsertColumn(10,"��Ʒ����",LVCFMT_LEFT,80);
	m_zwclist.InsertColumn(11,"��",LVCFMT_LEFT,58);
	m_zwclist.InsertColumn(12,"��",LVCFMT_LEFT,57);
	m_zwclist.InsertColumn(13,"����",LVCFMT_LEFT,60);
	CString SQLB="SELECT *FROM books";
	CString SQLV="SELECT *FROM vidio";
	CString SQLP="SELECT *FROM picture";
	Listzwc(SQLB,SQLV,SQLP);
	SetTimer(1,1,NULL);//��ʱ��
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void information::Listzwc(CString strSQLB, CString strSQLV, CString strSQLP)
{
m_zwclist.DeleteAllItems(); 

bookset book;
vidioset vio;
pictureset pic;

 if(!book.Open(CRecordset::dynaset,strSQLB,CRecordset::readOnly))//��������Դ��ִ�и�����SQL���
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 } 
 
 if(!vio.Open(CRecordset::dynaset,strSQLV,CRecordset::readOnly))//��������Դ��ִ�и�����SQL���
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 } 
 
 if(!pic.Open(CRecordset::dynaset,strSQLP,CRecordset::readOnly))//��������Դ��ִ�и�����SQL���
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 } 

 int i=0;
 CString strleng;
 CString strwid;

 while (!book.IsEOF())
 {
 m_zwclist.InsertItem(i,book.m_id);
 m_zwclist.SetItemText(i,1,book.m_tittle);
 m_zwclist.SetItemText(i,2,book.m_writer);
 m_zwclist.SetItemText(i,3,book.m_grade);
 m_zwclist.SetItemText(i,4,book.m_output);
 m_zwclist.SetItemText(i,5,book.m_isbn);
 m_zwclist.SetItemText(i,6,book.m_page);
 m_zwclist.SetItemText(i,13,"�鼮");
 book.MoveNext();
 i++;
 m_counterb=i;
 }

 while (!vio.IsEOF())
 {
 m_zwclist.InsertItem(i,vio.m_id);
 m_zwclist.SetItemText(i,1,vio.m_tittle);
 m_zwclist.SetItemText(i,2,vio.m_writer);
 m_zwclist.SetItemText(i,3,vio.m_grade);
 m_zwclist.SetItemText(i,7,vio.m_name);
 m_zwclist.SetItemText(i,8,vio.m_year);
 m_zwclist.SetItemText(i,9,vio.m_length);
 m_zwclist.SetItemText(i,13,"����");
 vio.MoveNext();
 i++;
 m_counyerv=i-m_counterb;
 }

 while (!pic.IsEOF())
 {
 m_zwclist.InsertItem(i,pic.m_id);
 m_zwclist.SetItemText(i,1,pic.m_tittle);
 m_zwclist.SetItemText(i,2,pic.m_writer);
 m_zwclist.SetItemText(i,3,pic.m_grade);
 m_zwclist.SetItemText(i,10,pic.m_country);
 strleng.Format("%d",pic.m_len);
 m_zwclist.SetItemText(i,11,strleng);
 strwid.Format("%d",pic.m_wid);
 m_zwclist.SetItemText(i,12,strwid);
 m_zwclist.SetItemText(i,13,"ͼƬ");
 pic.MoveNext();
 i++;
 m_counterp=i-m_counyerv-m_counterb;
 }
book.Close();
vio.Close();
pic.Close();
UpdateData(FALSE);

}

void information::OnButtonAdd() 
{
	int n=0;
	// TODO: Add your control notification handler code here
  if(type=="�鼮")
  {
	  
  bookdlg bok;
  if(bok.DoModal()!=IDOK)
  {
	  return;
  }
 id="b"+bok.m_bid;
 title=bok.m_btitle;
 writer=bok.m_bwriter;
 grade=bok.grade;
 output=bok.m_boutput;
 isnb=bok.m_bisnb;
 page=bok.m_bpage;
 
 for(int m=0;m<m_counterb;m++)
{
CString idd=m_zwclist.GetItemText(m,0);
idd.TrimRight();
if(id==idd)
n=1;;
}

 if(n==0)
 {
 CDatabase db;//�������ݿ������
    if(!db.Open("library"))//ֱ����������Դstuinfo
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
   CString strSQL;
 strSQL.Format("insert into books values('%s','%s','%s','%s','%s','%s','%s')",id,title,writer,grade,output,isnb,page);//��дSQL�������
 db.ExecuteSQL(strSQL);//ִ��SQL���
 db.Close();//�Ͽ�������Դ������
 MessageBox("����鼮�ɹ�","С����ܰ��ʾ");
}
 else
 AfxMessageBox("���иñ�ŵ��鼮�����������룡");
  }
  



if(type=="����")
{
vidiodlg vdi;
if(vdi.DoModal()!=IDOK)
{
	return;
}
id="v"+vdi.m_vid;
title=vdi.m_vtitle;
writer=vdi.m_vwriter;
grade=vdi.grade;
name=vdi.m_vname;
year=vdi.m_vyear;
length=vdi.m_vlength;
for(int m=0;m<m_counterb;m++)
{
CString idd=m_zwclist.GetItemText(m,0);
idd.TrimRight();
if(id==idd)
n=1;;
}

 if(n==0)
 {
CDatabase db;//�������ݿ������
    if(!db.Open("library"))//ֱ����������Դstuinfo
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
   CString strSQL;
 strSQL.Format("insert into vidio values('%s','%s','%s','%s','%s','%s','%s')",id,title,writer,grade,name,year,length);//��дSQL�������
 db.ExecuteSQL(strSQL);//ִ��SQL���
 db.Close();//�Ͽ�������Դ������
 MessageBox("��ӹ�����Ϣ�ɹ�","С����ܰ��ʾ");
}
else
 AfxMessageBox("���иñ�ŵĹ��̣����������룡");
  }



if(type=="ͼƬ")
{
picturedlg ppp;
if(ppp.DoModal()!=IDOK)
{
	return;
}
id="p"+ppp.m_pid;
title=ppp.m_ptitle;
writer=ppp.m_pwriter;
grade=ppp.grade;
country=ppp.m_pcountry;
len=ppp.m_pleng;
wid=ppp.m_pwidth;

for(int m=0;m<m_counterb;m++)
{
CString idd=m_zwclist.GetItemText(m,0);
idd.TrimRight();
if(id==idd)
n=1;;
}

 if(n==0)
 {
CDatabase db;//�������ݿ������
    if(!db.Open("library"))//ֱ����������Դstuinfo
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
   CString strSQL;
 strSQL.Format("insert into picture values('%s','%s','%s','%s','%s','%s','%s')",id,title,writer,grade,country,len,wid);//��дSQL�������
 db.ExecuteSQL(strSQL);//ִ��SQL���
 db.Close();//�Ͽ�������Դ������
 MessageBox("���ͼƬ��Ϣ�ɹ�","С����ܰ��ʾ");
}
 else
 AfxMessageBox("���иñ�ŵ�ͼƬ�����������룡");
  }



  Listzwc("select * from books","select *from vidio","select *from picture");//�г�������Ϣ

}

void information::OnSelchangeComboType() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	int nCursel=m_type.GetCurSel();
	if(nCursel>=0)
	m_type.GetLBText(nCursel,type);
	UpdateData(FALSE);
}

void information::OnButtonChange() 
{
	// TODO: Add your control notification handler code here
	int h;
	 int n = m_zwclist.GetSelectionMark();//�����ͼ�б�ѡ����Ŀ������
    if(n == -1)                           //Ϊ-1��ʾû��ѡ���κ���
  return;
	if(type=="�鼮")
	{
id=m_zwclist.GetItemText(n,0);
title=m_zwclist.GetItemText(n,1);
writer=m_zwclist.GetItemText(n,2);
grade=m_zwclist.GetItemText(n,3);
output=m_zwclist.GetItemText(n,4);
isnb=m_zwclist.GetItemText(n,5);
page=m_zwclist.GetItemText(n,6);

 bookdlg   dlg;
 dlg.m_bid=id;
 dlg.m_btitle=title;
 dlg.m_bwriter=writer;
 dlg.m_bgrade=grade;
 dlg.m_boutput=output;
 dlg.m_bisnb=isnb;
 dlg.m_bpage=page;
 UpdateData(FALSE);//���޸ĶԻ�����ʾ��ѡ��ѧ����Ϣ
 if(dlg.DoModal()!=IDOK)
  return;
 CString strOldid = id;//������������
 UpdateData(TRUE);
 id=dlg.m_bid;
 title=dlg.m_btitle;
 writer=dlg.m_bwriter;
 grade=dlg.m_bgrade;
 output=dlg.m_boutput;
 isnb=dlg.m_bisnb;
 page=dlg.m_bpage;
 CDatabase db;//�������ݿ������
    if(!db.Open("library"))//ֱ����������Դstuinfo
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
 CString strSQL = "",strTemp;
 strTemp.Format("update books set id='%s',tittle='%s',writer='%s',grade='%s',output='%s',isbn='%s',page='%s' where id='%s' ",id,title,writer,grade,output,isnb,page,strOldid);
 strSQL+=strTemp;
 db.ExecuteSQL(strSQL);
 db.Close();
 MessageBox("�޸��鼮�ɹ�","С����ܰ��ʾ");
 Listzwc("select * from books","select * from vidio","select * from picture");
}





if(type=="����")
{
id=m_zwclist.GetItemText(n,0);
title=m_zwclist.GetItemText(n,1);
writer=m_zwclist.GetItemText(n,2);
grade=m_zwclist.GetItemText(n,3);
name=m_zwclist.GetItemText(n,7);
year=m_zwclist.GetItemText(n,8);
length=m_zwclist.GetItemText(n,9);

  vidiodlg  dlg;
 dlg.m_vid=id;
 dlg.m_vtitle=title;
 dlg.m_vwriter=writer;
 dlg.m_vgrade=grade;
 dlg.m_vname=name;
 dlg.m_vyear=year;
 dlg.m_vlength=length;
 UpdateData(FALSE);//���޸ĶԻ�����ʾ��ѡ��ѧ����Ϣ
 if(dlg.DoModal()!=IDOK)
  return;
 CString strOldid = id;//������������
 UpdateData(TRUE);
 id=dlg.m_vid;
 title=dlg.m_vtitle;
 writer=dlg.m_vwriter;
 grade=dlg.m_vgrade;
 name=dlg.m_vname;
 year=dlg.m_vyear;
 length=dlg.m_vlength;
   for(int m=0;m<m_counterb;m++)
{
CString idd=m_zwclist.GetItemText(m,0);
idd.TrimRight();
if(id==idd)
h=1;;
}
 
 CDatabase db;//�������ݿ������
    if(!db.Open("library"))//ֱ����������Դstuinfo
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
 CString strSQL = "",strTemp;
 strTemp.Format("update vidio set id='%s',tittle='%s',writer='%s',grade='%s',name='%s',year='%s',length='%s' where id='%s' ",id,title,writer,grade,name,year,length,strOldid);
 strSQL+=strTemp;
 db.ExecuteSQL(strSQL);
 
 db.Close();
 MessageBox("�޸Ĺ��̳ɹ�","С����ܰ��ʾ");
 Listzwc("select * from books","select * from vidio","select * from picture");
}
 


if(type=="ͼƬ")
	{

id=m_zwclist.GetItemText(n,0);
title=m_zwclist.GetItemText(n,1);
writer=m_zwclist.GetItemText(n,2);
grade=m_zwclist.GetItemText(n,3);
country=m_zwclist.GetItemText(n,10);
len=m_zwclist.GetItemText(n,11);
wid=m_zwclist.GetItemText(n,12);

  picturedlg  dlg;
 dlg.m_pid=id;
 dlg.m_ptitle=title;
 dlg.m_pwriter=writer;
 dlg.m_pgrade=grade;
 dlg.m_pcountry=country;
 dlg.m_pleng=len;
 dlg.m_pwidth=wid;
 UpdateData(FALSE);//���޸ĶԻ�����ʾ��ѡ��ѧ����Ϣ
 if(dlg.DoModal()!=IDOK)
  return;
 CString strOldid = id;//������������
 UpdateData(TRUE);
 id=dlg.m_pid;
 title=dlg.m_ptitle;
 writer=dlg.m_pwriter;
 grade=dlg.m_pgrade;
country=dlg.m_pcountry;
len=dlg.m_pleng;
wid=dlg.m_pwidth;
    for(int m=0;m<m_counterb;m++)
{
CString idd=m_zwclist.GetItemText(m,0);
idd.TrimRight();
if(id==idd)
h=1;;
}

 CDatabase db;//�������ݿ������
    if(!db.Open("library"))//ֱ����������Դstuinfo
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
 CString strSQL = "",strTemp;
 strTemp.Format("update picture set id='%s',tittle='%s',writer='%s',grade='%s',country='%s',len='%s',wid='%s' where id='%s' ",id,title,writer,grade,country,len,wid,strOldid);
 strSQL+=strTemp;
 db.ExecuteSQL(strSQL);

 db.Close();
 MessageBox("�޸�ͼƬ�ɹ�","С����ܰ��ʾ");
 Listzwc("select * from books","select * from vidio","select * from picture");
}
 


}

void information::OnButtonSearch() 
{


if(type=="�鼮")
{
	searchdlg dlg;
	if(dlg.DoModal()==IDOK)
		idd="b"+dlg.m_searid; 
	
	int i;
for(int m=0;m<m_counterb;m++)
{
id=m_zwclist.GetItemText(m,0);
id.TrimRight();

if(id==idd)
i=m;
}
id=m_zwclist.GetItemText(i,0);
title=m_zwclist.GetItemText(i,1);
writer=m_zwclist.GetItemText(i,2);
grade=m_zwclist.GetItemText(i,3);
output=m_zwclist.GetItemText(i,4);
isnb=m_zwclist.GetItemText(i,5);
page=m_zwclist.GetItemText(i,6);
if(writer=="")
MessageBox("û���ҵ����ϵ���Ϣ","��ܰ��ʾ");
 m_zwclist.DeleteAllItems();
 m_zwclist.InsertItem(0,id);
 m_zwclist.SetItemText(0,1,title);
 m_zwclist.SetItemText(0,2,writer);
 m_zwclist.SetItemText(0,3,grade);
 m_zwclist.SetItemText(0,4,output);
 m_zwclist.SetItemText(0,5,isnb);
 m_zwclist.SetItemText(0,6,page);
 m_zwclist.SetItemText(0,13,"�鼮");
UpdateData(FALSE);
}
if(type=="����")
{
	searchdlg dlg;
	if(dlg.DoModal()==IDOK)
		idd="v"+dlg.m_searid; 
	
	int i;
for(int m=m_counterb;m<m_counterb+m_counterp;m++)
{
id=m_zwclist.GetItemText(m,0);
id.TrimRight();

if(id==idd)
i=m;
}
id=m_zwclist.GetItemText(i,0);
title=m_zwclist.GetItemText(i,1);
writer=m_zwclist.GetItemText(i,2);
grade=m_zwclist.GetItemText(i,3);
output=m_zwclist.GetItemText(i,7);
isnb=m_zwclist.GetItemText(i,8);
page=m_zwclist.GetItemText(i,9);
if(writer=="")
MessageBox("û���ҵ����ϵ���Ϣ","��ʾ");
 m_zwclist.DeleteAllItems();
 m_zwclist.InsertItem(0,id);
 m_zwclist.SetItemText(0,1,title);
 m_zwclist.SetItemText(0,2,writer);
 m_zwclist.SetItemText(0,3,grade);
 m_zwclist.SetItemText(0,7,output);
 m_zwclist.SetItemText(0,8,isnb);
 m_zwclist.SetItemText(0,9,page);
 m_zwclist.SetItemText(0,13,"����");
UpdateData(FALSE);
}
if(type=="ͼƬ")
{
	searchdlg dlg;
	if(dlg.DoModal()==IDOK)
		idd="p"+dlg.m_searid; 
	
	int i;
for(int m=m_counterb+m_counyerv;m<m_counterb+m_counyerv+m_counterp;m++)
{
id=m_zwclist.GetItemText(m,0);
id.TrimRight();

if(id==idd)
i=m;
}
id=m_zwclist.GetItemText(i,0);
title=m_zwclist.GetItemText(i,1);
writer=m_zwclist.GetItemText(i,2);
grade=m_zwclist.GetItemText(i,3);
output=m_zwclist.GetItemText(i,10);
isnb=m_zwclist.GetItemText(i,11);
page=m_zwclist.GetItemText(i,12);
if(writer=="")
MessageBox("û���ҵ����ϵ���Ϣ","��ʾ");
 m_zwclist.DeleteAllItems();
 m_zwclist.InsertItem(0,id);
 m_zwclist.SetItemText(0,1,title);
 m_zwclist.SetItemText(0,2,writer);
 m_zwclist.SetItemText(0,3,grade);
 m_zwclist.SetItemText(0,10,output);
 m_zwclist.SetItemText(0,11,isnb);
 m_zwclist.SetItemText(0,12,page);
 m_zwclist.SetItemText(0,13,"ͼƬ");
UpdateData(FALSE);
}

}







void information::OnButtonDelete() 
{
	// TODO: Add your control notification handler code here
	int n = m_zwclist.GetSelectionMark();
 if(n == -1)//û��ѡ���κ���Ŀ
 {
  MessageBox("��ѡ��һ����Ŀ�ٵ��ɾ��!","��ʾ");
  return;
 }
 id = m_zwclist.GetItemText(n,0);//��ȡѡ�����������Ϣname
  
   
 
	  CDatabase db;
	   if(!db.Open("library"))
 {
  MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
  return;
 }
 CString strSQL;
if(type=="�鼮")
 strSQL.Format("delete from books where id='%s'",id);
else if(type=="����")
 strSQL.Format("delete from vidio where id='%s'",id);
else if(type=="ͼƬ")
 strSQL.Format("delete from picture where id='%s'",id);
else if(type=="")
AfxMessageBox("��ѡ����Ϣ������");


  db.ExecuteSQL(strSQL);
 MessageBox("ɾ���ɹ�!","��ʾ");
 db.Close();
   Listzwc("select * from books","select * from vidio","select * from picture");
 

}

//DEL void information::OnButtonTongj() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL }

void information::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	int count = m_zwclist.GetItemCount();//��ȡ��Ŀ����
	m_counter = count;
    UpdateData(FALSE);
	CDialog::OnTimer(nIDEvent);
}

void information::OnButtonRefer() 
{
	// TODO: Add your control notification handler code here
	 Listzwc("select * from books","select * from vidio","select * from picture");
	 MessageBox("�𾴵Ĺ���Ա��ˢ��ҳ��ɹ�","С��ϵͳ��ܰ��ʾ");
}

//DEL void information::Listb(CString SQLB)
//DEL {
//DEL 	m_zwclist.DeleteAllItems(); 
//DEL 	bookset book;
//DEL if(!book.Open(CRecordset::dynaset,SQLB,CRecordset::readOnly))//��������Դ��ִ�и�����SQL���
//DEL  {
//DEL   MessageBox("��������Դʧ��!","����",MB_ICONASTERISK|MB_OK);
//DEL   return;
//DEL  } 
//DEL  int i=0;
//DEL 
//DEL 
//DEL  while (!book.IsEOF())
//DEL  m_zwclist.InsertItem(0,book.m_id);
//DEL  m_zwclist.SetItemText(0,1,book.m_tittle);
//DEL  m_zwclist.SetItemText(0,2,book.m_writer);
//DEL  m_zwclist.SetItemText(0,3,book.m_grade);
//DEL  m_zwclist.SetItemText(0,4,book.m_output);
//DEL  m_zwclist.SetItemText(0,5,book.m_isbn);
//DEL  m_zwclist.SetItemText(0,6,book.m_page);
//DEL  m_zwclist.SetItemText(0,13,"�鼮");
//DEL 
//DEL }
