// F.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "F.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CF dialog


CF::CF(CWnd* pParent /*=NULL*/)
	: CDialog(CF::IDD, pParent)
{
	//{{AFX_DATA_INIT(CF)
	m_f = 0;
	m_f1 = _T("");
	m_f2 = _T("");
	m_f3 = _T("");
	m_t1 = _T("Значение частоты(кгц)");
	m_t2 = _T("");
	m_t3 = _T("");
	//}}AFX_DATA_INIT
}


void CF::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CF)
	DDX_Radio(pDX, IDC_F, m_f);
	DDX_Text(pDX, IDC_F1_EDIT, m_f1);
	DDX_Text(pDX, IDC_F2_EDIT, m_f2);
	DDX_Text(pDX, IDC_F3_EDIT, m_f3);
	DDX_Text(pDX, IDC_T1_EDIT, m_t1);
	DDX_Text(pDX, IDC_T2_EDIT, m_t2);
	DDX_Text(pDX, IDC_T3_EDIT, m_t3);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CF, CDialog)
	//{{AFX_MSG_MAP(CF)
	ON_BN_CLICKED(IDC_F, OnF)
	ON_BN_CLICKED(IDC_DF, OnDf)
	ON_BN_CLICKED(IDC_KF, OnKf)
	ON_BN_CLICKED(IDC_FOK_BUTTON, OnFokButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CF message handlers

void CF::OnF() 
{
	// TODO: Add your control notification handler code here
		GetDlgItem(IDC_F1_EDIT)->SetFocus();
    m_f=0;
	m_t1="Значение частоты (кгц)";
	m_t2="";
	m_t3="";
    UpdateData(FALSE);
}

void CF::OnDf() 
{
	// TODO: Add your control notification handler code here
	  GetDlgItem(IDC_F1_EDIT)->SetFocus();
    m_f=1;
	m_t1="Минимальная частота Fmin(кгц)" ;
	m_t2="Максимальная частота Fmax(кгц)";
	m_t3="Шаг изменения частоты dF(кгц)";
	UpdateData(FALSE);
}

void CF::OnKf() 
{
	// TODO: Add your control notification handler code here
		GetDlgItem(IDC_F1_EDIT)->SetFocus();
    m_f=2;
	m_t1="Минимальная частота Fmin(кгц)";
	m_t2="Максимальная частота Fmax(кгц)";
	m_t3="Отношение соседних частот K";
	UpdateData(FALSE);
}

void CF::OnFokButton() 
{
	// TODO: Add your control notification handler code here
		float fmax,df,kk;
	int kf;
	switch(m_f)
	{case 0: UpdateData(TRUE);f[1]=atof(m_f1);
             nf=1;
			 break;
	 case 1: UpdateData(TRUE);f[1]=atof(m_f1);
		     fmax=atof(m_f2);
			 df=atof(m_f3);
			 kf=1;
			  while(f[kf]<fmax){
			       f[kf+1]=f[kf]+df;
			        kf=kf+1;}
              nf=kf;
			 
              break;
     case 2:UpdateData(TRUE); f[1]=atof(m_f1);
		     fmax=atof(m_f2);
			 kk=atof(m_f3);
			 kf=1;
			 while(f[kf]<fmax){
			      f[kf+1]=kk*f[kf];
			      kf=kf+1; }
             nf=kf;
			
			 break;
	}
	OnOK();
}

