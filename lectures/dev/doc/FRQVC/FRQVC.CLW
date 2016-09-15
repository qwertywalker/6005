; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CR
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "frqvc.h"

ClassCount=11
Class1=CFrqvcApp
Class2=CFrqvcDlg
Class3=CAboutDlg

ResourceCount=11
Resource1=IDD_R
Resource2=IDR_MAINFRAME
Resource3=IDD_F
Resource4=IDD_L
Resource5=IDD_ABOUTBOX (English (U.S.))
Resource6=IDD_FRQVC_DIALOG
Class4=CSIZE
Class5=CR
Resource7=IDD_F (F)
Class6=CF
Resource8=IDD_SIZE
Class7=CIO
Class8=CFILE
Class9=CRED
Resource9=IDD_C
Resource10=IDD_IO
Class10=CC
Class11=CL
Resource11=IDR_MENU1

[CLS:CFrqvcApp]
Type=0
HeaderFile=frqvc.h
ImplementationFile=frqvc.cpp
Filter=N
LastObject=CFrqvcApp

[CLS:CFrqvcDlg]
Type=0
HeaderFile=frqvcDlg.h
ImplementationFile=frqvcDlg.cpp
Filter=D
LastObject=CFrqvcDlg
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=frqvcDlg.h
ImplementationFile=frqvcDlg.cpp
Filter=D

[DLG:IDD_FRQVC_DIALOG]
Type=1
Class=CFrqvcDlg
ControlCount=1
Control1=IDC_LST,listbox,1352728833

[MNU:IDR_MENU1]
Type=1
Class=CFrqvcDlg
Command1=ID_CONS
Command2=ID_FILE
Command3=ID_F
Command4=ID_IO
Command5=ID_CALC
Command6=ID_EXIT
CommandCount=6

[DLG:IDD_ABOUTBOX (English (U.S.))]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_SIZE]
Type=1
Class=CSIZE
ControlCount=9
Control1=IDC_NV,edit,1350631552
Control2=IDC_NR,edit,1350631552
Control3=IDC_NC,edit,1350631552
Control4=IDC_NL,edit,1350631552
Control5=IDOK,button,1342242817
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352

[CLS:CSIZE]
Type=0
HeaderFile=SIZE.h
ImplementationFile=SIZE.cpp
BaseClass=CDialog
Filter=D
LastObject=CSIZE
VirtualFilter=dWC

[DLG:IDD_R]
Type=1
Class=CR
ControlCount=9
Control1=IDC_NPR,edit,1350631552
Control2=IDC_NMR,edit,1350631552
Control3=IDC_ZR,edit,1350631552
Control4=IDC_NEXTR,edit,1350631552
Control5=IDC_STATIC,static,1342308354
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_NEXTR__BUTTON,button,1342242817

[CLS:CR]
Type=0
HeaderFile=R.h
ImplementationFile=R.cpp
BaseClass=CDialog
Filter=D
LastObject=CR
VirtualFilter=dWC

[CLS:CF]
Type=0
HeaderFile=F.h
ImplementationFile=F.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CF

[DLG:IDD_IO]
Type=1
Class=CIO
ControlCount=11
Control1=IDC_STATIC,static,1342308352
Control2=IDC_LP_EDIT,edit,1350631552
Control3=IDC_LM_EDIT,edit,1350631552
Control4=IDC_STATIC,static,1342308352
Control5=IDC_KP_EDIT,edit,1350631552
Control6=IDC_KM_EDIT,edit,1350631552
Control7=IDC_IOOK_BUTTON,button,1342242817
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_STATIC,static,1342308352
Control11=IDC_STATIC,static,1342308352

[CLS:CIO]
Type=0
HeaderFile=IO.h
ImplementationFile=IO.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CIO

[DLG:IDD_F (F)]
Type=1
Class=CF
ControlCount=10
Control1=IDC_F1_EDIT,edit,1350631552
Control2=IDC_F2_EDIT,edit,1350631552
Control3=IDC_F3_EDIT,edit,1350631552
Control4=IDC_F,button,1342308361
Control5=IDC_DF,button,1342177289
Control6=IDC_KF,button,1342177289
Control7=IDC_T1_EDIT,edit,1350633600
Control8=IDC_T2_EDIT,edit,1350633600
Control9=IDC_T3_EDIT,edit,1350633600
Control10=IDC_FOK_BUTTON,button,1342242817

[DLG:IDD_F]
Type=1
Class=CF
ControlCount=10
Control1=IDC_F1_EDIT,edit,1350631552
Control2=IDC_F2_EDIT,edit,1350631552
Control3=IDC_F3_EDIT,edit,1350631552
Control4=IDC_F,button,1342308361
Control5=IDC_DF,button,1342177289
Control6=IDC_KF,button,1342177289
Control7=IDC_T1_EDIT,edit,1350633600
Control8=IDC_T2_EDIT,edit,1350633600
Control9=IDC_T3_EDIT,edit,1350633600
Control10=IDC_FOK_BUTTON,button,1342242817

[CLS:CFILE]
Type=0
HeaderFile=FILE.h
ImplementationFile=FILE.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_FILEOK_BUTTON

[CLS:CRED]
Type=0
HeaderFile=RED.h
ImplementationFile=RED.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CRED

[DLG:IDD_C]
Type=1
Class=CC
ControlCount=9
Control1=IDC_NPC,edit,1350631552
Control2=IDC_NMC,edit,1350631552
Control3=IDC_ZC,edit,1350631552
Control4=IDC_NEXTC,edit,1350631552
Control5=IDC_STATIC,static,1342308354
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_NEXTC__BUTTON,button,1342242817

[DLG:IDD_L]
Type=1
Class=CL
ControlCount=9
Control1=IDC_NPL,edit,1350631552
Control2=IDC_NML,edit,1350631552
Control3=IDC_ZL,edit,1350631552
Control4=IDC_NEXTL,edit,1350631552
Control5=IDC_STATIC,static,1342308354
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_STATIC,static,1342308352
Control9=IDC_NEXTL__BUTTON,button,1342242817

[CLS:CC]
Type=0
HeaderFile=C.h
ImplementationFile=C.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_NEXTC__BUTTON

[CLS:CL]
Type=0
HeaderFile=L.h
ImplementationFile=L.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=IDC_NEXTL__BUTTON

