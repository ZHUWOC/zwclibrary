; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=picturedlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "zwclibrary.h"
LastPage=0

ClassCount=17
Class1=CZwclibraryApp
Class2=CZwclibraryDoc
Class3=CZwclibraryView
Class4=CMainFrame
Class6=CAboutDlg

ResourceCount=9
Resource1=IDD_DIALOG_LODIN
Resource2=IDD_DIALOG_VIDIO
Resource3=IDD_DIALOG_BOOK
Resource4=IDD_DIALOG_PICTURE
Resource5=IDD_DIALOG_HOME
Resource6=IDD_ABOUTBOX
Resource7=IDR_MAINFRAME
Class5=CZwclibrarySet
Class7=czwcset
Class8=logindlg
Class9=information
Class10=bookset
Class11=zwcset
Class12=vidioset
Class13=pictureset
Class14=bookdlg
Class15=vidiodlg
Class16=picturedlg
Resource8=IDD_ZWCLIBRARY_FORM
Class17=searchdlg
Resource9=IDD_DIALOG_SEAR

[CLS:CZwclibraryApp]
Type=0
HeaderFile=zwclibrary.h
ImplementationFile=zwclibrary.cpp
Filter=N

[CLS:CZwclibraryDoc]
Type=0
HeaderFile=zwclibraryDoc.h
ImplementationFile=zwclibraryDoc.cpp
Filter=N

[CLS:CZwclibraryView]
Type=0
HeaderFile=zwclibraryView.h
ImplementationFile=zwclibraryView.cpp
Filter=D
BaseClass=CRecordView
VirtualFilter=RVWC
LastObject=ID_LOGINDLG


[CLS:CZwclibrarySet]
Type=0
HeaderFile=zwclibrarySet.h
ImplementationFile=zwclibrarySet.cpp
Filter=N

[DB:CZwclibrarySet]
DB=1
DBType=ODBC
ColumnCount=2
Column1=[id], 1, 20
Column2=[psw], 1, 20


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=zwclibrary.cpp
ImplementationFile=zwclibrary.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_PRINT
Command2=ID_FILE_PRINT_PREVIEW
Command3=ID_FILE_PRINT_SETUP
Command4=ID_APP_EXIT
Command5=ID_EDIT_UNDO
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_RECORD_FIRST
Command10=ID_RECORD_PREV
Command11=ID_RECORD_NEXT
Command12=ID_RECORD_LAST
Command13=ID_VIEW_TOOLBAR
Command14=ID_VIEW_STATUS_BAR
Command15=ID_APP_ABOUT
Command16=ID_LOGINDLG
CommandCount=16

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_PRINT
Command2=ID_EDIT_UNDO
Command3=ID_EDIT_CUT
Command4=ID_EDIT_COPY
Command5=ID_EDIT_PASTE
Command6=ID_EDIT_UNDO
Command7=ID_EDIT_CUT
Command8=ID_EDIT_COPY
Command9=ID_EDIT_PASTE
Command10=ID_NEXT_PANE
Command11=ID_PREV_PANE
CommandCount=11

[DLG:IDD_ZWCLIBRARY_FORM]
Type=1
Class=CZwclibraryView
ControlCount=1
Control1=IDC_STATIC,static,1350570510

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_FILE_PRINT
Command5=ID_RECORD_FIRST
Command6=ID_RECORD_PREV
Command7=ID_RECORD_NEXT
Command8=ID_RECORD_LAST
Command9=ID_APP_ABOUT
Command10=ID_LOGINDLG
CommandCount=10

[CLS:czwcset]
Type=0
HeaderFile=czwcset.h
ImplementationFile=czwcset.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r
LastObject=czwcset

[DB:czwcset]
DB=1
DBType=ODBC
ColumnCount=26
Column1=[dbo].[books].[id], 1, 20
Column2=[dbo].[books].[tittle], 1, 50
Column3=[dbo].[books].[writer], 1, 10
Column4=[dbo].[books].[grade], 1, 10
Column5=[output], 1, 20
Column6=[isbn], 1, 20
Column7=[page], 1, 10
Column8=[dbo].[picture].[id], 1, 20
Column9=[dbo].[picture].[tittle], 1, 50
Column10=[dbo].[picture].[writer], 1, 10
Column11=[dbo].[picture].[grade], 1, 10
Column12=[country], 1, 10
Column13=[len], 4, 4
Column14=[wid], 4, 4
Column15=[dbo].[sysdiagrams].[name], -9, 256
Column16=[principal_id], 4, 4
Column17=[diagram_id], 4, 4
Column18=[version], 4, 4
Column19=[definition], -4, 2147483647
Column20=[dbo].[vidio].[id], 1, 20
Column21=[dbo].[vidio].[tittle], 1, 50
Column22=[dbo].[vidio].[writer], 1, 10
Column23=[dbo].[vidio].[grade], 1, 10
Column24=[dbo].[vidio].[name], 1, 20
Column25=[year], 1, 10
Column26=[length], 1, 20

[DLG:IDD_DIALOG_LODIN]
Type=1
Class=logindlg
ControlCount=6
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_USER,combobox,1344340226
Control6=IDC_PSW,edit,1350631584

[DLG:IDD_DIALOG_HOME]
Type=1
Class=information
ControlCount=19
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_LIST_HOME,SysListView32,1350631425
Control4=IDC_BUTTON_SEARCH,button,1342242816
Control5=IDC_BUTTON_ADD,button,1342242816
Control6=IDC_BUTTON_DELETE,button,1342242816
Control7=IDC_BUTTON_CHANGE,button,1342242816
Control8=IDC_STATIC,static,1342308352
Control9=IDC_COMBO_TYPE,combobox,1344340227
Control10=IDC_STATIC,static,1350571022
Control11=IDC_BUTTON_REFER,button,1342242816
Control12=IDC_EDIT1,edit,1350633600
Control13=IDC_EDIT_B,edit,1350633600
Control14=IDC_EDIT_V,edit,1350633600
Control15=IDC_EDIT_P,edit,1350633600
Control16=IDC_STATIC,static,1342308352
Control17=IDC_STATIC,static,1342308352
Control18=IDC_STATIC,static,1342308352
Control19=IDC_STATIC,static,1342308352

[DLG:IDD_DIALOG_BOOK]
Type=1
Class=bookdlg
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT_BID,edit,1350631552
Control11=IDC_EDIT_BOUTPUT,edit,1350631552
Control12=IDC_EDIT_BISNB,edit,1350631552
Control13=IDC_EDIT_BPAGE,edit,1350631552
Control14=IDC_EDIT_BTITLE,edit,1350631552
Control15=IDC_EDIT_BWRITER,edit,1350631552
Control16=IDC_COMBO_BGRADE,combobox,1344340226

[DLG:IDD_DIALOG_VIDIO]
Type=1
Class=vidiodlg
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT_VID,edit,1350631552
Control11=IDC_EDIT_VTITLE,edit,1350631552
Control12=IDC_EDIT_VNAME,edit,1350631552
Control13=IDC_EDIT_VWRITER,edit,1350631552
Control14=IDC_EDIT_VYEAR,edit,1350631552
Control15=IDC_EDIT_VLENGTH,edit,1350631552
Control16=IDC_COMBO_VGRADE,combobox,1344340226

[DLG:IDD_DIALOG_PICTURE]
Type=1
Class=picturedlg
ControlCount=16
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT_PID,edit,1350631552
Control11=IDC_EDIT_PTITL,edit,1350631552
Control12=IDC_EDIT_PWRI,edit,1350631552
Control13=IDC_EDIT_PCOUNTRY,edit,1350631552
Control14=IDC_EDIT_PLENGTH,edit,1350631552
Control15=IDC_EDIT_PWIDTH,edit,1350631552
Control16=IDC_COMBO_PIC,combobox,1344340226

[CLS:logindlg]
Type=0
HeaderFile=logindlg.h
ImplementationFile=logindlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_PSW

[CLS:information]
Type=0
HeaderFile=information.h
ImplementationFile=information.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_LIST_HOME
VirtualFilter=dWC

[CLS:bookset]
Type=0
HeaderFile=bookset.h
ImplementationFile=bookset.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:bookset]
DB=1
DBType=ODBC
ColumnCount=7
Column1=[id], 1, 20
Column2=[tittle], 1, 50
Column3=[writer], 1, 10
Column4=[grade], 1, 10
Column5=[output], 1, 20
Column6=[isbn], 1, 20
Column7=[page], 1, 10

[CLS:zwcset]
Type=0
HeaderFile=zwcset.h
ImplementationFile=zwcset.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:zwcset]
DB=1
DBType=ODBC
ColumnCount=21
Column1=[dbo].[books].[id], 1, 20
Column2=[dbo].[books].[tittle], 1, 50
Column3=[dbo].[books].[writer], 1, 10
Column4=[dbo].[books].[grade], 1, 10
Column5=[output], 1, 20
Column6=[isbn], 1, 20
Column7=[page], 1, 10
Column8=[dbo].[picture].[id], 1, 20
Column9=[dbo].[picture].[tittle], 1, 50
Column10=[dbo].[picture].[writer], 1, 10
Column11=[dbo].[picture].[grade], 1, 10
Column12=[country], 1, 10
Column13=[len], 4, 4
Column14=[wid], 4, 4
Column15=[dbo].[vidio].[id], 1, 20
Column16=[dbo].[vidio].[tittle], 1, 50
Column17=[dbo].[vidio].[writer], 1, 10
Column18=[dbo].[vidio].[grade], 1, 10
Column19=[name], 1, 20
Column20=[year], 1, 10
Column21=[length], 1, 20

[CLS:vidioset]
Type=0
HeaderFile=vidioset.h
ImplementationFile=vidioset.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:vidioset]
DB=1
DBType=ODBC
ColumnCount=7
Column1=[id], 1, 20
Column2=[tittle], 1, 50
Column3=[writer], 1, 10
Column4=[grade], 1, 10
Column5=[name], 1, 20
Column6=[year], 1, 10
Column7=[length], 1, 20

[CLS:pictureset]
Type=0
HeaderFile=pictureset.h
ImplementationFile=pictureset.cpp
BaseClass=CRecordset
Filter=N
VirtualFilter=r

[DB:pictureset]
DB=1
DBType=ODBC
ColumnCount=7
Column1=[id], 1, 20
Column2=[tittle], 1, 50
Column3=[writer], 1, 10
Column4=[grade], 1, 10
Column5=[country], 1, 10
Column6=[len], 4, 4
Column7=[wid], 4, 4

[CLS:bookdlg]
Type=0
HeaderFile=bookdlg.h
ImplementationFile=bookdlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT_BPAGE
VirtualFilter=dWC

[CLS:vidiodlg]
Type=0
HeaderFile=vidiodlg.h
ImplementationFile=vidiodlg.cpp
BaseClass=CDialog
Filter=D
LastObject=ID_APP_ABOUT
VirtualFilter=dWC

[CLS:picturedlg]
Type=0
HeaderFile=picturedlg.h
ImplementationFile=picturedlg.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_COMBO_PIC
VirtualFilter=dWC

[DLG:IDD_DIALOG_SEAR]
Type=1
Class=searchdlg
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT2,edit,1350631552
Control4=IDC_STATIC,static,1342308352

[CLS:searchdlg]
Type=0
HeaderFile=searchdlg.h
ImplementationFile=searchdlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_EDIT2

