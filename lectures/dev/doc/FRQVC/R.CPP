// R.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "R.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CR dialog


CR::CR(CWnd* pParent /*=NULL*/)
	: CDialog(CR::IDD, pParent)
{
	//{{AFX_DATA_INIT(CR)
	m_nextr = 1;
	m_npr = _T("");
	m_zr = _T("");
	m_nmr = _T("");
	//}}AFX_DATA_INIT
}


void CR::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CR)
	DDX_Text(pDX, IDC_NEXTR, m_nextr);
	DDX_Text(pDX, IDC_NPR, m_npr);
	DDX_Text(pDX, IDC_ZR, m_zr);
	DDX_Text(pDX, IDC_NMR, m_nmr);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CR, CDialog)
	//{{AFX_MSG_MAP(CR)
	ON_BN_CLICKED(IDC_NEXTR__BUTTON, OnNextrButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CR message handlers

void CR::OnNextrButton() 
{
	// TODO: Add your control notification handler code here
	 UpdateData(TRUE);
	 in_r[m_nextr][0]=atoi(m_npr);
	 in_r[m_nextr][1]=atoi(m_nmr);
	 z_r[m_nextr]=atof(m_zr);
	 m_nextr++;
   	 if(m_nextr<=nr)
	 {  
	    m_npr="";
	    m_nmr="";
	    m_zr="";
	    GetDlgItem(IDC_NPR)->SetFocus();
		UpdateData(FALSE);
		
	 }
     else
		 OnOK();
}
