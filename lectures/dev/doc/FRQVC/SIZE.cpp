// SIZE.cpp : implementation file
//

#include "stdafx.h"
#include "frqvc.h"
#include "SIZE.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSIZE dialog


CSIZE::CSIZE(CWnd* pParent /*=NULL*/)
	: CDialog(CSIZE::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSIZE)
	m_nc = _T("");
	m_nl = _T("");
	m_nr = _T("");
	m_nv = _T("");
	//}}AFX_DATA_INIT
}


void CSIZE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSIZE)
	DDX_Text(pDX, IDC_NC, m_nc);
	DDX_Text(pDX, IDC_NL, m_nl);
	DDX_Text(pDX, IDC_NR, m_nr);
	DDX_Text(pDX, IDC_NV, m_nv);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSIZE, CDialog)
	//{{AFX_MSG_MAP(CSIZE)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSIZE message handlers

void CSIZE::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}
