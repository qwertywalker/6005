// C.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "C.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CC dialog


CC::CC(CWnd* pParent /*=NULL*/)
	: CDialog(CC::IDD, pParent)
{
	//{{AFX_DATA_INIT(CC)
	m_nmc = _T("");
	m_npc = _T("");
	m_nextc = 1;
	m_zc = _T("");
	//}}AFX_DATA_INIT
}


void CC::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CC)
	DDX_Text(pDX, IDC_NMC, m_nmc);
	DDX_Text(pDX, IDC_NPC, m_npc);
	DDX_Text(pDX, IDC_NEXTC, m_nextc);
	DDX_Text(pDX, IDC_ZC, m_zc);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CC, CDialog)
	//{{AFX_MSG_MAP(CC)
	ON_BN_CLICKED(IDC_NEXTC__BUTTON, OnNextcButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CC message handlers

void CC::OnNextcButton() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	 in_c[m_nextc][0]=atoi(m_npc);
	 in_c[m_nextc][1]=atoi(m_nmc);
	 z_c[m_nextc]=atof(m_zc);
	 m_nextc++;
   	 if(m_nextc<=nc)
	 {  
	    m_npc="";
	    m_nmc="";
	    m_zc="";
	    GetDlgItem(IDC_NPC)->SetFocus();
		UpdateData(FALSE);
		
	 }
     else
		 OnOK();
}
