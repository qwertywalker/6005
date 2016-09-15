// L.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "L.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CL dialog


CL::CL(CWnd* pParent /*=NULL*/)
	: CDialog(CL::IDD, pParent)
{
	//{{AFX_DATA_INIT(CL)
	m_nextl = 1;
	m_nml = _T("");
	m_npl = _T("");
	m_zl = _T("");
	//}}AFX_DATA_INIT
}


void CL::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CL)
	DDX_Text(pDX, IDC_NEXTL, m_nextl);
	DDX_Text(pDX, IDC_NML, m_nml);
	DDX_Text(pDX, IDC_NPL, m_npl);
	DDX_Text(pDX, IDC_ZL, m_zl);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CL, CDialog)
	//{{AFX_MSG_MAP(CL)
	ON_BN_CLICKED(IDC_NEXTL__BUTTON, OnNextlButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CL message handlers

void CL::OnNextlButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	 in_l[m_nextl][0]=atoi(m_npl);
	 in_l[m_nextl][1]=atoi(m_nml);
	 z_l[m_nextl]=atof(m_zl);
	 m_nextl++;
   	 if(m_nextl<=nl)
	 {  
	    m_npl="";
	    m_nml="";
	    m_zl="";
	    GetDlgItem(IDC_NPL)->SetFocus();
		UpdateData(FALSE);
		
	 }
     else
		 OnOK();
}
